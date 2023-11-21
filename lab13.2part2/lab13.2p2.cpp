#include <iostream>
#include "math.h"

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Result: " << ADD(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << SUBTRACT(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << MULTIPLY(num1, num2) << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << DIVIDE(num1, num2) << endl;
        }
        else {
            cout << "Error: Division by zero!" << endl;
        }
        break;
    default:
        cout << "Error: Invalid operation!" << endl;
        break;
    }

    return 0;
}
