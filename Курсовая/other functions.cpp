#include "main information.h"
// ��������� �����)
void sort����(List_of_����* �����)
{
	if (�����)
	{
		List_of_����* next = �����->next;
		while (next)
		{
			if (next->data.����  < �����->data.����)
			{
				����������_�_����� tempData = next->data;
				next->data = �����->data;
				�����->data = tempData;
			}
			next = next->next;
		}
		sort����(�����->next);
	}
}
// ��������� ������
void sort������(List_of_�����* ������)
{
	if (������)
	{
		List_of_�����* next = ������->next;
		while (next)
		{
			if (next->data.������ < ������->data.������)
			{
				����������_�_������ tempData = next->data;
				next->data = ������->data;
				������->data = tempData;
			}
			next = next->next;
		}
		sort������(������->next);
	}
}
// ��������� ��������
void sort��������(List_of_���������_�_������* ��������)
{
	if (��������)
	{
		List_of_���������_�_������* next = ��������->next;
		while (next)
		{
			if (next->data.������� < ��������->data.�������)
			{
				����������_�_��������_�_������ tempData = next->data;
				next->data = ��������->data;
				��������->data = tempData;
			}
			next = next->next;
		}
		sort��������(��������->next);
	}
}
//void change�����������(List_of_�����* ������, int �����_���_��������, string &new����������); // �������� ����������
// �������� ���������� ��������)
void change�����������(List_of_�����* ������,List_of_���������_�_������* �������, int �����_���_��������, string &����������New)
{
	if (�������)
		if (�������->data.�����_�������� == �����_���_��������)
			�������->data.���������� = ����������New;
		else
			change�����������(������,�������->next, �����_���_��������, ����������New);
}

// ������� �������� ������)
void delete������(List_of_�����* ������, List_of_���������_�_������* ��������, int &delete_������)
{
	if (������) {
		if (������->data.�����_������ == delete_������)
		{

			if (������->prev)
			{
				������->prev->next = ������->next;

			}
			if (������->next)
			{
				������->next->prev = ������->prev;
			}
		}
		else delete������(������->next, ��������, delete_������);
	}
	if (��������)
	{
		if (��������->data.����������� == delete_������)/////!!!!!!!!!!!!!!!!
		{

			if (��������->prev)
			{
				��������->prev->next = ��������->next;
			}
			if (��������->next)
			{
				��������->next->prev = ��������->prev;
			}
		}
		else delete������(������, ��������->next, delete_������);
	}
}