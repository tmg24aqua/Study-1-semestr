#include "code.h"
#include <iostream>
using namespace std;
void processNumbers() {
    char number;
    cout << "���� ����������� �� ��� ��� ���� �� �� ������ �����(.)\n";
    while (true) {
        cout << "�����: ";
        cin >> number;
        if (number == '.') break;

        if (number >= '0' && number <= '9') {
            cout << "��� �������: " << (int)number << endl;
        }
        else {
            cout << "������: �������� ����.\n";
        }
    }
}