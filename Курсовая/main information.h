#include <string>
#include <iostream>

#pragma once
using namespace std;


// ���������� � �����
struct ����������_�_�����
{
	string ����;
	int �����_����;
	����������_�_�����();
	����������_�_�����(string ����New, int �����_�����New);
};

//// ���������� � ������
struct ����������_�_������
{
	int �����_�����;
	int �����_������;
	string ������;
	����������_�_������();
	����������_�_������(string ������New, int �����_������New, int �����_�����New);
};


// ���������� � ��������
struct ����������_�_��������_�_������
{
	string �������;
	int �����������;
	int �����_��������;
	string ����������;
	����������_�_��������_�_������();
	����������_�_��������_�_������(string �������New, string ����������New, int �����_��������New, int �����������New);
};


//// ������ ������
struct List_of_����
{
	����������_�_����� data;
	List_of_����* next;
	List_of_����* prev;

	List_of_����();
	List_of_����(����������_�_����� dataNew, List_of_����* nextNew, List_of_����* prevNew);
};

//������ �����
struct List_of_�����
{
	����������_�_������ data;
	List_of_�����* next;
	List_of_�����* prev;

	List_of_�����();
	List_of_�����(����������_�_������ dataNew, List_of_�����* nextNew, List_of_�����* prevNew);
};

//������ ���������
struct List_of_���������_�_������
{
	����������_�_��������_�_������ data;
	List_of_���������_�_������* next;
	List_of_���������_�_������* prev;

	List_of_���������_�_������();
	List_of_���������_�_������(����������_�_��������_�_������ dataNew, List_of_���������_�_������* nextNew, List_of_���������_�_������* prevNew);
};

