#include "main information.h"

//����� ������ ������)
void print����(List_of_����* �����)
{
	if (�����)
	{
		cout << �����->data.�����_���� << �����->data.���� << endl;
		print����(�����->next);
	}
}
//����� ������ �����)
void print������(List_of_�����* ������)
{
	if (������)
	{
		cout  <<������->data.�����_������ << ������->data.������ << endl;
		print������(������->next);
	}
}
//����� ������ ���������)
void print��������(List_of_���������_�_������* �������)
{
	if (�������)
	{
		cout << �������->data.�����_�������� << �������->data.������� << "\t" << �������->data.���������� << endl;
		print��������(�������->next);
	}
}


//����� ������ ��������� �� ������)
void print��������FromAlbum(List_of_�����* ������, List_of_���������_�_������* �������,int �����������)
{
	for (List_of_�����* currentStore1 = ������; currentStore1 != NULL; currentStore1 = currentStore1->next)
	{
		for (List_of_���������_�_������* currentStore2 = �������; currentStore2!= NULL; currentStore2 = currentStore2->next)
		{
			if ((currentStore1->data.�����_������ == �����������) && (����������� ==currentStore2->data.����������� ))///!!!!!!!!!!!!!!!!!!
				cout << currentStore2->data.�����_�������� << currentStore2->data.������� << endl;
		}
	}
}
//����� ������  ����� �� �����
void print������FromGroup(List_of_����* ����, List_of_�����* ������, int �����_�����)
{
	for (List_of_����* currentStore1 = ����; currentStore1 != NULL; currentStore1 = currentStore1->next)
	{
		for (List_of_�����* currentStore2 = ������; currentStore2 != NULL; currentStore2 = currentStore2->next)
		{
			if ((currentStore1->data.�����_���� == �����_�����) && (�����_����� == currentStore2->data.�����_�����))///!!!!!!!!!!!!!!!!!!!!!!!
				cout << currentStore2->data.�����_������ << currentStore2->data.������ << endl;
		}
	}
}
