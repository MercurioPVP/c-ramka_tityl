
#include <iostream>
#include <ctype.h>
#include <Windows.h>

using namespace std;


int main()
{
    SetConsoleCP(1251); // функция устанавливает кодовую таблицу(win-cp 1251) для работы с потоком ввода
    SetConsoleOutputCP(1251); // функция устанавливает кодовую таблицу(win-cp 1251) для работы с потоком вывода

	char name[20];
	char secondName[30];
	char otchestvo[30]; 
	char gruppa[10];

	std::cout << "Введите имя студента: ";
	std::cin >> name;
	std::cout << "\nВведите фамилию студента: ";
	std::cin >> secondName;
	std::cout << "\nВведите отчество студента: ";
	std::cin >> otchestvo;
	std::cout << "\nВведите номер группы студента: ";
	std::cin >> gruppa;
    int len = 31; // минимальная длина рамки
    int len_str1 = 25 + strlen(gruppa); // длина второй строки в рамке
    int len_str2 = strlen(name) + strlen(secondName) + strlen(otchestvo) + 6; // длина третьей строки

    // в операторе if определяем длину рамки? причём минимальная длина должна быть - 31 символ
    if (len_str1 >= len_str2 && len_str1 > 31)
        len = len_str1;
    else
        if (len_str2 > 31)
            len = len_str2;

    cout << "\n\t\t\t"; // выравнивание по центру
    for (int counter = 0; counter < len; counter++)
        cout << "*";

    cout << "\n\t\t\t* Лабораторная работа №1";
    for (int counter = 0; counter < len - 25; counter++)
        cout << " ";

    cout << "*\n\t\t\t* Выполнил(а): ст. гр. " << gruppa;
    for (int counter = 0; counter <= (len - len_str1); counter++)
        cout << " ";

    cout << "*\n\t\t\t* " << secondName << " " << name << " " << otchestvo;
    for (int counter = 0; counter <= (len - len_str2); counter++)
        cout << " ";
    cout << "*";

    cout << "\n\t\t\t"; // выравнивание по центру
    for (int counter = 0; counter < len; counter++)
        cout << "*";
    cout << std::endl;

    system("pause");
    return 0;
}
