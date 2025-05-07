#include <iostream>
#include <cmath>

int main () {
    double a, b, c;

    std::cout << "Enter a: "; std::cin >> a;
    std::cout << "Enter b: "; std::cin >> b;
  
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "The Hypotenuse is " << c << std::endl;

    return 0;
}