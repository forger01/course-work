#pragma once
void addКурс(List_of_курс* &list, информация_о_Курсе &data, List_of_курс*  prev = NULL); //добавляем курс
void addГруппы(List_of_групп* &list, информация_о_группе &data, List_of_групп* prevData = NULL); //группу
void addСтудент(List_of_студентов_и_аттест* &list, информация_о_студеите_и_аттест &data, List_of_студентов_и_аттест* prevData = NULL); //студента
информация_о_Курсе getКурсInformationFile(FILE* file); // Информация о курсах
информация_о_группе getГруппаInformationFile(FILE* file); // о группе
информация_о_студеите_и_аттест getСтудентInformationFile(FILE* file);// о студентах
List_of_курс* getКурсListFile(char* fileName); // список курсов
List_of_групп* getГруппыListFile(char* fileName); // групп
List_of_студентов_и_аттест* getСтудентыListFile(char* fileName); // студентов
void printКурс(List_of_курс* курсы); //функция печати на консоль курса
void printГруппы(List_of_групп* группы); // группы
void printСтуденты(List_of_студентов_и_аттест* студенты); // студентов
void sortКурс(List_of_курс* курс); // сортировка Курсов по алфавиту 
void sortГруппы(List_of_групп* группы); //  по группам
void sortСтуденты(List_of_студентов_и_аттест* студенты); // по студенту
void printСтудентыFromAlbum(List_of_групп* группа, List_of_студентов_и_аттест* студенты, int номергруппы); // печать студентов по группе
void printГруппыFromGroup(List_of_курс* курс, List_of_групп* группы, int номер_курса/*, int номергруппы*/); // печать групп по курсу
//void printСтудентыАТТ(List_of_групп* группы, List_of_студентов_и_аттест* студенты, int номер_группы); // печать студентов
string readToChar(FILE* file, char endChar); // считываение до указанного символа в строку
 // изменить аттестацию
void changeАТТСтудента(List_of_групп* группы, List_of_студентов_и_аттест* студент, int номер_изм_студента, string &аттестацияNew);
void deleteГруппу(List_of_групп* группы, List_of_студентов_и_аттест* студенты, int &delete_группу); // удалить группу
