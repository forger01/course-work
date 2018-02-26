#include "main information.h"
#include "functions.h"

//Считывание информации о курсе из файла
информация_о_Курсе getКурсInformationFile(FILE* file)
{
	информация_о_Курсе info_курса;
	fscanf_s(file, "%d", &info_курса.номер_Курс);
	readToChar(file, '"');
	info_курса.курс = readToChar(file, '"');
	fgetc(file);
	return info_курса;
}
//Считывание информации о групе из файла
информация_о_группе getГруппаInformationFile(FILE* file)
{
	информация_о_группе  info_группы;
	fscanf_s(file, "%d", &info_группы.номер_курса);
	readToChar(file, '.');
	fscanf_s(file, "%d", &info_группы.номер_группы);
	readToChar(file, '.');
	info_группы.группа = readToChar(file, '.');
	fgetc(file);
	return info_группы;
}
информация_о_студеите_и_аттест getСтудентInformationFile(FILE* file)
{
	информация_о_студеите_и_аттест  info_студент;
	fscanf_s(file, "%d", &info_студент.номергруппы);
	readToChar(file, '.');
	fscanf_s(file, "%d", &info_студент.номер_студента);
	readToChar(file, '.');
	info_студент.студент = readToChar(file, '.');
	fgetc(file);
	info_студент.аттестация = readToChar(file, '.');
	fgetc(file);
	return info_студент;
}

//Считывает из файла все до указанного символа, пихает в строку и возвращает
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

//Считывание списка групп из файла
List_of_курс* getКурсListFile(char* fileName)
{
	FILE* file = NULL;
	fopen_s(&file, fileName, "r");

	if (file == NULL) return NULL;


	List_of_курс* list = NULL;

	fgetc(file);
	while (!feof(file))
	{
		fseek(file, -1, SEEK_CUR);
		addКурс(list,getКурсInformationFile(file));
		fgetc(file);
	}
	fclose(file);
	return list;
}
List_of_групп* getГруппыListFile(char* fileName)
{
	FILE* file = NULL;
	fopen_s(&file, fileName, "r");

	if (file == NULL) return NULL;


	List_of_групп* list = NULL;

	fgetc(file);
	while (!feof(file))
	{
		fseek(file, -1, SEEK_CUR);
		addГруппы(list, getГруппаInformationFile(file));
		fgetc(file);
	}

	fclose(file);
	return list;
}
List_of_студентов_и_аттест* getСтудентыListFile(char* fileName)
{
	FILE* file = NULL;
	fopen_s(&file, fileName, "r");

	if (file == NULL) return NULL;


	List_of_студентов_и_аттест* list = NULL;

	fgetc(file);
	while (!feof(file))
	{
		fseek(file, -1, SEEK_CUR);
		addСтудент(list, getСтудентInformationFile(file));
		fgetc(file);
	}

	fclose(file);
	return list;
}