// These are the header files that we need for the code.

#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>

// The line below "using namespace std" statement makes
//it unnecessary to prefix the standard library functions with "std::".
using namespace std;
void intro();
int main() {
	intro();
    char op;
    double num1, num2, result;
    
    cout << "Enter an operator (+, -, *, /, s, c, t, l, e): ";
    cin >> op;
    
    switch(op) {
        case '+':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result;
            break;
        case 's':
            cout << "Enter a number in radians: ";
            cin >> num1;
            result = sin(num1);
            cout << "sin(" << num1 << ") = " << result;
            break;
        case 'c':
            cout << "Enter a number in radians: ";
            cin >> num1;
            result = cos(num1);
            cout << "cos(" << num1 << ") = " << result;
            break;
        case 't':
            cout << "Enter a number in radians: ";
            cin >> num1;
            result = tan(num1);
            cout << "tan(" << num1 << ") = " << result;
            break;
        case 'l':
            cout << "Enter a number: ";
            cin >> num1;
            result = log(num1);
            cout << "log(" << num1 << ") = " << result;
            break;
        case 'e':
            cout << "Enter a number: ";
            cin >> num1;
            result = exp(num1);
            cout << "exp(" << num1 << ") = " << result;
            break;
        default:
            cout << "Invalid operator!";
            break;
    }
    
    return 0;
}

        // Introduction section 
void intro(){
    cout << "\n\n\n\t     SCIENTIFIC CALCULATOR";
    cout << "\n\n\n\n\t     MADE BY:AFOLABI PAUL";
    cout << "\n\n\n\n\t     MATRIC NO:H/CTE/22/0705";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
