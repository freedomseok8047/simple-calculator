#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    double result;
    
    cout << "Simple Calculator" << endl;
    cout << "=================" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "\nEquation: " << num1 << " " << op << " " << num2 << " = ";
    
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << result << endl;
            break;
        case '/':
            if(num2 == 0) {
                cout << "Error! Division by zero is not allowed." << endl;
            } else {
                result = num1 / num2;
                cout << result << endl;
            }
            break;
        default:
            cout << "Error! Invalid operator." << endl;
            break;
    }
    
    return 0;
}