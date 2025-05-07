#include <iostream>
using  std::cout, std::endl, std::cin;

int main(){
    char operation;
    double num1, num2, result;

    cout << "***** CALCULATOR *********\n" << endl;
    cout << "enter (+,-,*,/): " << endl;
    cin >> operation;

    cout << "enter both numbers: " << endl;
    cin >> num1 >> num2;

    switch(operation){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            cout << "invalid operation" << endl;
            return 1;
    }

    cout << num1 << " " << operation << " " << num2 << " = " << result << endl;


    cout << "**************************" << endl;
}