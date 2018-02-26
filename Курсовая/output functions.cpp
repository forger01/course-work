#include "main information.h"

//Вывод списка курсов)
void printКурс(List_of_курс* курсы)
{
	if (курсы)
	{
		cout << курсы->data.номер_Курс << курсы->data.курс << endl;
		printКурс(курсы->next);
	}
}
//Вывод списка групп)
void printГруппы(List_of_групп* группы)
{
	if (группы)
	{
		cout  <<группы->data.номер_группы << группы->data.группа << endl;
		printГруппы(группы->next);
	}
}
//Вывод списка студентов)
void printСтуденты(List_of_студентов_и_аттест* студент)
{
	if (студент)
	{
		cout << студент->data.номер_студента << студент->data.студент << "\t" << студент->data.аттестация << endl;
		printСтуденты(студент->next);
	}
}


//Вывод списка студентов по группе)
void printСтудентыFromAlbum(List_of_групп* группы, List_of_студентов_и_аттест* студент,int номергруппы)
{
	for (List_of_групп* currentStore1 = группы; currentStore1 != NULL; currentStore1 = currentStore1->next)
	{
		for (List_of_студентов_и_аттест* currentStore2 = студент; currentStore2!= NULL; currentStore2 = currentStore2->next)
		{
			if ((currentStore1->data.номер_группы == номергруппы) && (номергруппы ==currentStore2->data.номергруппы ))///!!!!!!!!!!!!!!!!!!
				cout << currentStore2->data.номер_студента << currentStore2->data.студент << endl;
		}
	}
}
//Вывод списка  групп по курсу
void printГруппыFromGroup(List_of_курс* курс, List_of_групп* группы, int номер_курса)
{
	for (List_of_курс* currentStore1 = курс; currentStore1 != NULL; currentStore1 = currentStore1->next)
	{
		for (List_of_групп* currentStore2 = группы; currentStore2 != NULL; currentStore2 = currentStore2->next)
		{
			if ((currentStore1->data.номер_Курс == номер_курса) && (номер_курса == currentStore2->data.номер_курса))///!!!!!!!!!!!!!!!!!!!!!!!
				cout << currentStore2->data.номер_группы << currentStore2->data.группа << endl;
		}
	}
}
