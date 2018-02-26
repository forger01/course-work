#include <string>
#include <iostream>

#pragma once
using namespace std;


// Информация о курсе
struct информация_о_Курсе
{
	string курс;
	int номер_Курс;
	информация_о_Курсе();
	информация_о_Курсе(string курсNew, int номер_курсаNew);
};

//// Информация о группе
struct информация_о_группе
{
	int номер_курса;
	int номер_группы;
	string группа;
	информация_о_группе();
	информация_о_группе(string группаNew, int номер_группыNew, int номер_курсаNew);
};


// Информация о студенте
struct информация_о_студеите_и_аттест
{
	string студент;
	int номергруппы;
	int номер_студента;
	string аттестация;
	информация_о_студеите_и_аттест();
	информация_о_студеите_и_аттест(string студентNew, string аттестацияNew, int номер_студентаNew, int номергруппыNew);
};


//// Список курсов
struct List_of_курс
{
	информация_о_Курсе data;
	List_of_курс* next;
	List_of_курс* prev;

	List_of_курс();
	List_of_курс(информация_о_Курсе dataNew, List_of_курс* nextNew, List_of_курс* prevNew);
};

//Список групп
struct List_of_групп
{
	информация_о_группе data;
	List_of_групп* next;
	List_of_групп* prev;

	List_of_групп();
	List_of_групп(информация_о_группе dataNew, List_of_групп* nextNew, List_of_групп* prevNew);
};

//Список студентов
struct List_of_студентов_и_аттест
{
	информация_о_студеите_и_аттест data;
	List_of_студентов_и_аттест* next;
	List_of_студентов_и_аттест* prev;

	List_of_студентов_и_аттест();
	List_of_студентов_и_аттест(информация_о_студеите_и_аттест dataNew, List_of_студентов_и_аттест* nextNew, List_of_студентов_и_аттест* prevNew);
};

