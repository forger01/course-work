#pragma once
void add����(List_of_����* &list, ����������_�_����� &data, List_of_����*  prev = NULL); //��������� ����
void add������(List_of_�����* &list, ����������_�_������ &data, List_of_�����* prevData = NULL); //������
void add�������(List_of_���������_�_������* &list, ����������_�_��������_�_������ &data, List_of_���������_�_������* prevData = NULL); //��������
����������_�_����� get����InformationFile(FILE* file); // ���������� � ������
����������_�_������ get������InformationFile(FILE* file); // � ������
����������_�_��������_�_������ get�������InformationFile(FILE* file);// � ���������
List_of_����* get����ListFile(char* fileName); // ������ ������
List_of_�����* get������ListFile(char* fileName); // �����
List_of_���������_�_������* get��������ListFile(char* fileName); // ���������
void print����(List_of_����* �����); //������� ������ �� ������� �����
void print������(List_of_�����* ������); // ������
void print��������(List_of_���������_�_������* ��������); // ���������
void sort����(List_of_����* ����); // ���������� ������ �� �������� 
void sort������(List_of_�����* ������); //  �� �������
void sort��������(List_of_���������_�_������* ��������); // �� ��������
void print��������FromAlbum(List_of_�����* ������, List_of_���������_�_������* ��������, int �����������); // ������ ��������� �� ������
void print������FromGroup(List_of_����* ����, List_of_�����* ������, int �����_�����/*, int �����������*/); // ������ ����� �� �����
//void print�����������(List_of_�����* ������, List_of_���������_�_������* ��������, int �����_������); // ������ ���������
string readToChar(FILE* file, char endChar); // ����������� �� ���������� ������� � ������
 // �������� ����������
void change�����������(List_of_�����* ������, List_of_���������_�_������* �������, int �����_���_��������, string &����������New);
void delete������(List_of_�����* ������, List_of_���������_�_������* ��������, int &delete_������); // ������� ������
