#include "main information.h"

// Добавляет в конец списка курсов
void addКурс(List_of_курс* &list, информация_о_Курсе &data, List_of_курс* prevData)
{
	if (list)
	{
		addКурс(list->next, data, list);
	}
	else
		list = new List_of_курс(data, NULL, prevData);
}

// Добавляет в конец списка группы
void addГруппы(List_of_групп* &list, информация_о_группе &data, List_of_групп* prevData)
{
	if (list)
	{
		addГруппы(list->next, data, list);
	}
	else if ((prevData != NULL) && (list == NULL))
	{
		data.номер_группы = prevData->data.номер_группы + 1;
		list = new List_of_групп(data, NULL, prevData);
	}
	else
		list = new List_of_групп(data, NULL, prevData);
}

// Добавляет в конец списка Студента!!!!!!!!!!!!!!!!!!!!!
void addСтудент(List_of_студентов_и_аттест* &list, информация_о_студеите_и_аттест &data, List_of_студентов_и_аттест* prevData)
{
	if (list)
	{
		addСтудент(list->next, data, list);
	}
	else if ((prevData != NULL) && (list == NULL))
	{
		data.номер_студента = prevData->data.номер_студента + 1;
		list = new List_of_студентов_и_аттест(data, NULL, prevData);
	}
	else list = new List_of_студентов_и_аттест(data, NULL, prevData);
}