#include "main information.h"
#include "functions.h"

//���������� ���������� � ����� �� �����
����������_�_����� get����InformationFile(FILE* file)
{
	����������_�_����� info_�����;
	fscanf_s(file, "%d", &info_�����.�����_����);
	readToChar(file, '"');
	info_�����.���� = readToChar(file, '"');
	fgetc(file);
	return info_�����;
}
//���������� ���������� � ����� �� �����
����������_�_������ get������InformationFile(FILE* file)
{
	����������_�_������  info_������;
	fscanf_s(file, "%d", &info_������.�����_�����);
	readToChar(file, '.');
	fscanf_s(file, "%d", &info_������.�����_������);
	readToChar(file, '.');
	info_������.������ = readToChar(file, '.');
	fgetc(file);
	return info_������;
}
����������_�_��������_�_������ get�������InformationFile(FILE* file)
{
	����������_�_��������_�_������  info_�������;
	fscanf_s(file, "%d", &info_�������.�����������);
	readToChar(file, '.');
	fscanf_s(file, "%d", &info_�������.�����_��������);
	readToChar(file, '.');
	info_�������.������� = readToChar(file, '.');
	fgetc(file);
	info_�������.���������� = readToChar(file, '.');
	fgetc(file);
	return info_�������;
}

//��������� �� ����� ��� �� ���������� �������, ������ � ������ � ����������
string readToChar(FILE* file, char endChar)
{
	string str = "";
	if (file == NULL) return NULL;
	while (true)
	{
		char c;
		fscanf_s(file, "%c", &c);
		if (c == endChar) break;
		str += c;
	}
	return str;
}

//���������� ������ ����� �� �����
List_of_����* get����ListFile(char* fileName)
{
	FILE* file = NULL;
	fopen_s(&file, fileName, "r");

	if (file == NULL) return NULL;


	List_of_����* list = NULL;

	fgetc(file);
	while (!feof(file))
	{
		fseek(file, -1, SEEK_CUR);
		add����(list,get����InformationFile(file));
		fgetc(file);
	}
	fclose(file);
	return list;
}
List_of_�����* get������ListFile(char* fileName)
{
	FILE* file = NULL;
	fopen_s(&file, fileName, "r");

	if (file == NULL) return NULL;


	List_of_�����* list = NULL;

	fgetc(file);
	while (!feof(file))
	{
		fseek(file, -1, SEEK_CUR);
		add������(list, get������InformationFile(file));
		fgetc(file);
	}

	fclose(file);
	return list;
}
List_of_���������_�_������* get��������ListFile(char* fileName)
{
	FILE* file = NULL;
	fopen_s(&file, fileName, "r");

	if (file == NULL) return NULL;


	List_of_���������_�_������* list = NULL;

	fgetc(file);
	while (!feof(file))
	{
		fseek(file, -1, SEEK_CUR);
		add�������(list, get�������InformationFile(file));
		fgetc(file);
	}

	fclose(file);
	return list;
}