#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!\n";
    string a="y";
    while (a == "y") {
        cout<<"Welcome to This Calculator\n";
        cout<<"Enter first number: ";
        int num1 , num2;
        cin >> num1;
        cout<<"Enter second number: ";
        cin >> num2;
        cout<<"Enter operation (+ for addition, - for subtraction, * for multiplication, / for division, r for remainder, ** for power): ";
        string operation;
        cin >> operation;
        if (operation == "+") {
            cout << "Result: " << num1 + num2 << endl;
        } else if (operation == "-") {
            cout << "Result: " << num1 - num2 << endl;
        } else if (operation == "*") {
            cout << "Result: " << num1 * num2 << endl;
        } else if (operation == "/") {
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
        } else if (operation == "r") {
            if (num2 != 0) {
                cout << "Result: " << num1 % num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
        } else if (operation == "**") {
            int result = 1;
            for (int i = 0; i < num2; ++i) {
                result *= num1;
            }
            cout << "Result: " << result << endl;
        } else {
            cout << "Invalid operation!" << endl;
        }
        cout << "Continue? (y/n): ";
        cin >> a;
    }
    return 0;
}