#include "code.h"
#include <iostream>
using namespace std;
void mainMenu() {
    int n;
    cout << "������� ����� �� 1 �� 4: ";
    cin >> n;

    switch (n) {
    case 1:
        processEnglishLetters(); 
        break;
    case 2:
        processRussianLetters();  
        break;
    case 3:
        processNumbers();         
        break;
    case 4:
        exit();
        break;
    default:
        cout << "������: �������� �����.\n";
        break;
    }
}