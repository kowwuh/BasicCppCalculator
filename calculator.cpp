#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2;

    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero\n";
            }
            break;
        default:
            cout << "Error: Invalid operation\n";
    }

    return 0;
}
