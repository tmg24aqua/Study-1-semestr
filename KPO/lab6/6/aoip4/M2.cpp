#include "code.h"
#include <iostream>
using namespace std;
void processEnglishLetters() {
    char upper_case, lower_case;
    cout << "���� ����������� �� ��� ��� ���� �� �� ������ �����(.)\n";
    while (true) {
        cout << "��������� ���������: ";
        cin >> upper_case;
        if (upper_case == '.') break;

        cout << "�������� ���������: ";
        cin >> lower_case;
        if (lower_case == '.') break;

        if ((upper_case >= 0x41 && upper_case <= 0x5A) && (lower_case >= 0x61 && lower_case <= 0x7A)) {
            cout << "������� �������� ����������: " << (int)upper_case - (int)lower_case << endl;
        }
        else {
            cout << "������: �������� ����.\n";
        }
    }
}
