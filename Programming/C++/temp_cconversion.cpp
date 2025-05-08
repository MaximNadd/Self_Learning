#include <iostream>
using std::cout, std::endl, std::cin;

int main() {

    double temp;
    char unit;

    cout << "Enter Tempreture and Unit: ";
    cin >> temp >> unit;

    if (unit == 'c') 
        temp = (temp * 9/5) + 32;
    else 
        temp = (temp - 32) * 5/9;

    cout << "Tempreture is: " << temp << endl;

    return 0;
}