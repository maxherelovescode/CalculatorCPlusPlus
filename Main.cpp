// C++ Calculator by Max Hewin
// Shoutout to chatgpt for helping me at times you a real one

#include <iostream>
#include "Main.h"
using namespace std;

int main() {
    // Variables
    float firstNumber, secondNumber;
    char operatorSymbol;

    getInput(firstNumber, secondNumber, operatorSymbol);

    calculateResult(firstNumber, secondNumber, operatorSymbol);

    cout << THANK_YOU_MESSAGE << endl;

    return 0;
}


void getInput(float &firstNumber, float &secondNumber, char &operatorSymbol) {
    // Input
    cout << WELCOME_MESSAGE << endl;
    cout << INPUT_MESSAGE;
    while (!(cin >> firstNumber)) {
        cout << INPUT_ERROR;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    while (!(cin >> secondNumber)) {
        cout << INPUT_ERROR;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << OPERATOR_MESSAGE;
    cin >> operatorSymbol;

    if (!operatorSymbol == '+' || !operatorSymbol == '-' || !operatorSymbol == '*' || !operatorSymbol == '/') {
        cout << OPERATOR_ERROR;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void calculateResult(float firstNumber, float secondNumber, char operatorSymbol) {
    // Processing
    cout << "Result: ";
    switch (operatorSymbol) {
    case '+':
        cout << firstNumber + secondNumber << endl;
        break;
    case '-':
        cout << firstNumber - secondNumber << endl;
        break;
    case '*':
        cout << firstNumber * secondNumber << endl;
        break;
    case '/':
        if (secondNumber != 0) {
            cout << firstNumber / secondNumber << endl;
        }
        else {
            cout << "ERROR: Can't Divide By Zero" << endl;
        }
        break;
    default:
        cout << "Invalid Operator" << endl;
        break;
    }
}