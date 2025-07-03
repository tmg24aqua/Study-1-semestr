#include "code.h"
#include <iostream>
using namespace std;
void processNumbers() {
    char number;
    cout << "Ввод продолжится до тех пор пока вы не введёте точку(.)\n";
    while (true) {
        cout << "Число: ";
        cin >> number;
        if (number == '.') break;

        if (number >= '0' && number <= '9') {
            cout << "Код символа: " << (int)number << endl;
        }
        else {
            cout << "Ошибка: неверный ввод.\n";
        }
    }
}