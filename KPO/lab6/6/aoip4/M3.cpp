#include "code.h"
#include <iostream>
using namespace std;
void processRussianLetters() {
    char upper_case, lower_case;
    cout << "Ввод продолжится до тех пор пока вы не введёте точку(.)\n";
    while (true) {
        cout << "Прописное написание: ";
        cin >> upper_case;
        if (upper_case == '.') break;

        cout << "Строчное написание: ";
        cin >> lower_case;
        if (lower_case == '.') break;

        if ((unsigned char)upper_case >= 0xC0 && (unsigned char)upper_case <= 0xDF &&
            (unsigned char)lower_case >= 0xE0 && (unsigned char)lower_case <= 0xFF) {
            cout << "Разница значений составляет: " << (int)upper_case - (int)lower_case << endl;
        }
        else {
            cout << "Ошибка: неверный ввод.\n";
        }
    }
}