#include "main information.h"

// ��������� � ����� ������ ������
void add����(List_of_����* &list, ����������_�_����� &data, List_of_����* prevData)
{
	if (list)
	{
		add����(list->next, data, list);
	}
	else
		list = new List_of_����(data, NULL, prevData);
}

// ��������� � ����� ������ ������
void add������(List_of_�����* &list, ����������_�_������ &data, List_of_�����* prevData)
{
	if (list)
	{
		add������(list->next, data, list);
	}
	else if ((prevData != NULL) && (list == NULL))
	{
		data.�����_������ = prevData->data.�����_������ + 1;
		list = new List_of_�����(data, NULL, prevData);
	}
	else
		list = new List_of_�����(data, NULL, prevData);
}

// ��������� � ����� ������ ��������!!!!!!!!!!!!!!!!!!!!!
void add�������(List_of_���������_�_������* &list, ����������_�_��������_�_������ &data, List_of_���������_�_������* prevData)
{
	if (list)
	{
		add�������(list->next, data, list);
	}
	else if ((prevData != NULL) && (list == NULL))
	{
		data.�����_�������� = prevData->data.�����_�������� + 1;
		list = new List_of_���������_�_������(data, NULL, prevData);
	}
	else list = new List_of_���������_�_������(data, NULL, prevData);
}