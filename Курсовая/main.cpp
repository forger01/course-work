#include <locale.h>
#include <string>
#include "main information.h"
#include "functions.h"
#include <windows.h>
#include <locale>
#include <clocale>
//setlocale(LC_ALL, "Russian");
//setlocale(LC_CTYPE,"Russian");
//SetConsoleCP(1251);
// SetConsoleOutputCP(1251);
//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

using namespace std;

void Menu()
{
	cout << "0. ����� ����\n";
	cout << "1. ������� ���������� �� ������\n";
	cout << "2. ������� ���������� � ������\n"; 
	cout << "3. ������� ���������� � �������\n"; 
	cout << "4. ������� ���������� � ���������\n";
	cout << "5. ������������� ���������� �� �����\n";
	cout << "6. ������������� ���������� �� ������\n";
	cout << "7. ������������� ���������� �� ��������\n";
	cout << "8. �������  ������\n";
	cout << "9. �������� ��������\n";
	cout << "10. �������� ���������� ��������\n";
	cout << "11. ����� ��� ������ �� �����\n"; 
	cout << "12. ����� ���� ��������� �� ������\n"; 
	cout << "13. �������� ����\n";
	cout << "14. �������� ������\n";
	cout << "15.  �����\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string new���������� = "";
	cout <<"\n\t\t\t �������� ������. \t\t\t\n";
	cout << "����� �������� ���� ������� 0\n";
	void Menu();
	List_of_����* ���� = NULL;
	List_of_�����* ������ = NULL;
	List_of_���������_�_������* �������� = NULL;
	����������_�_��������_�_������ new_��������;
	����������_�_����� new_N�����;
	����������_�_������ new_N������;

	int �����_��������;
	int �����_������;
	int �����_����;
	int �����_���_��������;
	int del_������;
	int s_punkt = 1;
	int nomer_menu;
	char c = ' ';
	while (s_punkt != 0)
	{
		cin >> nomer_menu;
		switch (nomer_menu) 
	{
		case 0:
			Menu();
			break;
		case 1: //system("cls");
			���� = get����ListFile("�����.txt");
			������ = get������ListFile("������.txt");
			�������� = get��������ListFile("��������.txt");
			cout << " \n ���������! \n" << endl;
			cout << "������� 0 ��� ������ ����" << endl;
			break;
		case 2:// system("cls");
			cout << "����:" << endl;
			print����(����);
			break;
		case 3: //system("cls");
			cout << "������:" << endl;
			print������(������);
			break;
		case 4:
			cout << "��������:" << endl;
			print��������(��������);
			break;
		case 5: 
			sort����(����);
			cout << "���������" << endl;
			break;
		case 6:
			sort������(������);
			cout << "���������" << endl;
			break;
		case 7:
			sort��������(��������);
			cout << "���������" << endl;
			break;
		case 8:
			cout << " ������� ����� ������, ������� ������ �������" << endl;
			scanf_s("%d", &del_������);
			delete������(������,��������, del_������);
			cout << "��������� " << endl;
			break;
		case 9:		
			cout << " ������� ����� ������, ���� ������ ��������" << endl;
			cin >> new_��������.�����������;///!!!!!!!!!!!!!!!!!!
			cout << " ������� ��� �������� (��� ���������� ������� '.')" << endl;
			getline(cin, new_��������.�������,'.');
			add�������(��������, new_��������); ////!!!!
			cout << "��������" << endl;
			break;
		case 10:
			cout << " �������  ����� ��������,� �������� ������ �������� ������" << endl;
			cin >> �����_���_��������;
			cout << " ������� ����������, �� ������� ������ ��������" ;
			cin >> new����������;
			change�����������(������, ��������, �����_���_��������, new����������);
			cout << "��������" << endl;
			break;
		case 11:
			cout << "������� ����� ����� " << endl;
			cin >> �����_����;
			print������FromGroup(����, ������, �����_����);
			break;
		case 12:
			cout << "������� ����� ������ " << endl;
			cin >> �����_��������;
			print��������FromAlbum(������, ��������, �����_��������);
			break;
		case 13:
			cout << " ������� ����� ����� ," << endl;
			cin >> new_N�����.�����_����;
			cout << " ������� ��� ����� (��� ���������� ������� '.')" << endl;
			getline(cin, new_N�����.����, '.');
			add����(����, new_N�����);
			cout << "��������" << endl;
			break;

		case 14:	
			cout << " ������� ����� �����, ���� ������ ��������" << endl;
			cin >> new_N������.�����_�����;///!!!!!!!!!!!!!!!!!!
			cout << " ������� ��� ������ (��� ���������� ������� '.')" << endl;
			getline(cin, new_N������.������, '.');
			add������(������, new_N������);
			cout << "��������" << endl;
			break;
		case 15:
			s_punkt = 0;
			break;
		default: cout << "������! ��������� ������� ����� ����";
			break;
		}
	}
	return 0;
}
