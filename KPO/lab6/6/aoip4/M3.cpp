#include "code.h"
#include <iostream>
using namespace std;
void processRussianLetters() {
    char upper_case, lower_case;
    cout << "���� ����������� �� ��� ��� ���� �� �� ������ �����(.)\n";
    while (true) {
        cout << "��������� ���������: ";
        cin >> upper_case;
        if (upper_case == '.') break;

        cout << "�������� ���������: ";
        cin >> lower_case;
        if (lower_case == '.') break;

        if ((unsigned char)upper_case >= 0xC0 && (unsigned char)upper_case <= 0xDF &&
            (unsigned char)lower_case >= 0xE0 && (unsigned char)lower_case <= 0xFF) {
            cout << "������� �������� ����������: " << (int)upper_case - (int)lower_case << endl;
        }
        else {
            cout << "������: �������� ����.\n";
        }
    }
}