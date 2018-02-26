#include "main information.h"
// Сортируем курсы)
void sortКурс(List_of_курс* курсы)
{
	if (курсы)
	{
		List_of_курс* next = курсы->next;
		while (next)
		{
			if (next->data.курс  < курсы->data.курс)
			{
				информация_о_Курсе tempData = next->data;
				next->data = курсы->data;
				курсы->data = tempData;
			}
			next = next->next;
		}
		sortКурс(курсы->next);
	}
}
// Сортируем группы
void sortГруппы(List_of_групп* группы)
{
	if (группы)
	{
		List_of_групп* next = группы->next;
		while (next)
		{
			if (next->data.группа < группы->data.группа)
			{
				информация_о_группе tempData = next->data;
				next->data = группы->data;
				группы->data = tempData;
			}
			next = next->next;
		}
		sortГруппы(группы->next);
	}
}
// Сортируем студентв
void sortСтуденты(List_of_студентов_и_аттест* студенты)
{
	if (студенты)
	{
		List_of_студентов_и_аттест* next = студенты->next;
		while (next)
		{
			if (next->data.студент < студенты->data.студент)
			{
				информация_о_студеите_и_аттест tempData = next->data;
				next->data = студенты->data;
				студенты->data = tempData;
			}
			next = next->next;
		}
		sortСтуденты(студенты->next);
	}
}
//void changeАТТСтудента(List_of_групп* группа, int номер_изм_студента, string &newАттестация); // изменить аттестацию
// Изменить аттестацию студента)
void changeАТТСтудента(List_of_групп* группы,List_of_студентов_и_аттест* студент, int номер_изм_студента, string &аттестацияNew)
{
	if (студент)
		if (студент->data.номер_студента == номер_изм_студента)
			студент->data.аттестация = аттестацияNew;
		else
			changeАТТСтудента(группы,студент->next, номер_изм_студента, аттестацияNew);
}

// функция удаления группы)
void deleteГруппу(List_of_групп* группы, List_of_студентов_и_аттест* студенты, int &delete_группу)
{
	if (группы) {
		if (группы->data.номер_группы == delete_группу)
		{

			if (группы->prev)
			{
				группы->prev->next = группы->next;

			}
			if (группы->next)
			{
				группы->next->prev = группы->prev;
			}
		}
		else deleteГруппу(группы->next, студенты, delete_группу);
	}
	if (студенты)
	{
		if (студенты->data.номергруппы == delete_группу)/////!!!!!!!!!!!!!!!!
		{

			if (студенты->prev)
			{
				студенты->prev->next = студенты->next;
			}
			if (студенты->next)
			{
				студенты->next->prev = студенты->prev;
			}
		}
		else deleteГруппу(группы, студенты->next, delete_группу);
	}
}