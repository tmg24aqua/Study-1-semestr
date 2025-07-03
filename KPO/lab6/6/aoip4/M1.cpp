#include "code.h"
#include <iostream>
using namespace std;
void mainMenu() {
    int n;
    cout << "¬ведите число от 1 до 4: ";
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
        cout << "ќшибка: неверный выбор.\n";
        break;
    }
}