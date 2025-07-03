#include <windows.h>
#include <iostream>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char upper_case, lower_case, number;
    int n;
    cout << "Введите число от 1 до 4:";
    cin >> n;

    switch (n)
    {
    case 1: {
        cout << "Прописное написание:";
        cin >> upper_case;

        cout << "Строчном написание: ";
        cin >> lower_case;

        if (upper_case >= 0x41 && upper_case <= 0x5A || lower_case >= 0x61 && lower_case <= 0x7A)
            cout << "Разница значений составляет:" << (int)upper_case - (int)lower_case << endl;
        else
        {
            cout << "Ошибка" << endl;
        }
        break;
    }
    case 2: {
        cout << "Прописное написание: ";
        cin >> upper_case;

        cout << "Строчном написание: ";
        cin >> lower_case;

        if ((unsigned char)upper_case >= 0xC0 && (unsigned char)upper_case <= 0xDF || (unsigned char)lower_case >= 0xE0 && (unsigned char)lower_case <= 0xFF)

            cout << "Разница значений составляет:" << (int)upper_case - (int)lower_case << endl;
        else
        {
            cout << "Ошибка" << endl;
        }
        break;
    }
    case 3: {
        cout << "number: ";
        cin >> number;
        if (number < 0x30 || number > 0x39)
        {
            cout << "Ошибка" << endl;
        }
        else
        {
            cout << "Вывод в консоль кода символа : " << (int)number << endl;
        }
        break;
    }
    case 4: {
        cout << "Выход из программы" << endl;
        break;
    }
    }