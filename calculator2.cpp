#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op, choice;
    double result = 0;
    bool hasResult = false;
    bool continueCalculating = true;
    
    cout << "Enhanced Calculator" << endl;
    cout << "===================" << endl;
    
    while(continueCalculating) {
        if(hasResult) {
            cout << "\nCurrent result: " << result << endl;
            cout << "Do you want to (c)ontinue with this result or (s)tart fresh? ";
            cin >> choice;
            
            if(choice == 'c' || choice == 'C') {
                num1 = result;
                cout << "Using " << num1 << " as first number." << endl;
            } else {
                cout << "Enter first number: ";
                cin >> num1;
            }
        } else {
            cout << "Enter first number: ";
            cin >> num1;
        }
        
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        
        cout << "Enter second number: ";
        cin >> num2;
        
        cout << "\nEquation: " << num1 << " " << op << " " << num2 << " = ";
        
        switch(op) {
            case '+':
                result = num1 + num2;
                cout << result << endl;
                hasResult = true;
                break;
            case '-':
                result = num1 - num2;
                cout << result << endl;
                hasResult = true;
                break;
            case '*':
                result = num1 * num2;
                cout << result << endl;
                hasResult = true;
                break;
            case '/':
                if(num2 == 0) {
                    cout << "Error! Division by zero is not allowed." << endl;
                    hasResult = false;
                } else {
                    result = num1 / num2;
                    cout << result << endl;
                    hasResult = true;
                }
                break;
            default:
                cout << "Error! Invalid operator." << endl;
                hasResult = false;
                break;
        }
        
        if(hasResult) {
            cout << "\nDo you want to perform another calculation? (y/n): ";
            cin >> choice;
            if(choice == 'n' || choice == 'N') {
                continueCalculating = false;
            }
        } else {
            cout << "\nDo you want to try again? (y/n): ";
            cin >> choice;
            if(choice == 'n' || choice == 'N') {
                continueCalculating = false;
            }
        }
    }
    
    cout << "\nThank you for using the calculator!" << endl;
    return 0;
}