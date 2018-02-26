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
	cout << "0. Вывод меню\n";
	cout << "1. Считать информацию из файлов\n";
	cout << "2. Вывести информацию о Курсах\n"; 
	cout << "3. Вывести информацию о Группах\n"; 
	cout << "4. Вывести информацию о Студентах\n";
	cout << "5. Отсортировать информацию по Курсу\n";
	cout << "6. Отсортировать информацию по Группе\n";
	cout << "7. Отсортировать информацию по Студенту\n";
	cout << "8. Удалить  группу\n";
	cout << "9. Добавить студента\n";
	cout << "10. Изменить аттестацию студента\n";
	cout << "11. Найти все группы по курсу\n"; 
	cout << "12. Найти всех студентов по группе\n"; 
	cout << "13. Добавить Курс\n";
	cout << "14. Добавить Группу\n";
	cout << "15.  Выход\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string newАттестация = "";
	cout <<"\n\t\t\t КУРСОВАЯ РАБОТА. \t\t\t\n";
	cout << "Чтобы показать меню нажмите 0\n";
	void Menu();
	List_of_курс* курс = NULL;
	List_of_групп* группы = NULL;
	List_of_студентов_и_аттест* студенты = NULL;
	информация_о_студеите_и_аттест new_студенты;
	информация_о_Курсе new_Nкурса;
	информация_о_группе new_Nгруппы;

	int номер_студента;
	int номер_группы;
	int номер_курс;
	int номер_изм_студента;
	int del_группу;
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
			курс = getКурсListFile("Курсы.txt");
			группы = getГруппыListFile("Группы.txt");
			студенты = getСтудентыListFile("Студенты.txt");
			cout << " \n Выполнено! \n" << endl;
			cout << "Нажмите 0 для Вывода меню" << endl;
			break;
		case 2:// system("cls");
			cout << "Курс:" << endl;
			printКурс(курс);
			break;
		case 3: //system("cls");
			cout << "Группы:" << endl;
			printГруппы(группы);
			break;
		case 4:
			cout << "Студенты:" << endl;
			printСтуденты(студенты);
			break;
		case 5: 
			sortКурс(курс);
			cout << "Выполнено" << endl;
			break;
		case 6:
			sortГруппы(группы);
			cout << "Выполнено" << endl;
			break;
		case 7:
			sortСтуденты(студенты);
			cout << "Выполнено" << endl;
			break;
		case 8:
			cout << " Введите номер Группы, который хотите удалить" << endl;
			scanf_s("%d", &del_группу);
			deleteГруппу(группы,студенты, del_группу);
			cout << "Выполнено " << endl;
			break;
		case 9:		
			cout << " Введите номер группы, куда хотите добавить" << endl;
			cin >> new_студенты.номергруппы;///!!!!!!!!!!!!!!!!!!
			cout << " Введите имя студента (для завершение введите '.')" << endl;
			getline(cin, new_студенты.студент,'.');
			addСтудент(студенты, new_студенты); ////!!!!
			cout << "Выпонено" << endl;
			break;
		case 10:
			cout << " Введите  номер студента,у которого хотите изменить данные" << endl;
			cin >> номер_изм_студента;
			cout << " Введите аттестацию, на которую хотите заменить" ;
			cin >> newАттестация;
			changeАТТСтудента(группы, студенты, номер_изм_студента, newАттестация);
			cout << "Выпонено" << endl;
			break;
		case 11:
			cout << "Введите номер Курса " << endl;
			cin >> номер_курс;
			printГруппыFromGroup(курс, группы, номер_курс);
			break;
		case 12:
			cout << "Введите номер Группы " << endl;
			cin >> номер_студента;
			printСтудентыFromAlbum(группы, студенты, номер_студента);
			break;
		case 13:
			cout << " Введите номер Курса ," << endl;
			cin >> new_Nкурса.номер_Курс;
			cout << " Введите имя Курса (для завершение введите '.')" << endl;
			getline(cin, new_Nкурса.курс, '.');
			addКурс(курс, new_Nкурса);
			cout << "Выпонено" << endl;
			break;

		case 14:	
			cout << " Введите номер курса, куда хотите добавить" << endl;
			cin >> new_Nгруппы.номер_курса;///!!!!!!!!!!!!!!!!!!
			cout << " Введите имя группы (для завершение введите '.')" << endl;
			getline(cin, new_Nгруппы.группа, '.');
			addГруппы(группы, new_Nгруппы);
			cout << "Выпонено" << endl;
			break;
		case 15:
			s_punkt = 0;
			break;
		default: cout << "Ошибка! Правильно введите пункт меню";
			break;
		}
	}
	return 0;
}
