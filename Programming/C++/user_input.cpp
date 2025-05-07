#include <iostream>

typedef std::string str;
int main() {
    str name;
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name); // std::ws clears the buffer from any newline characters etc before getline;

    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old." <<std::endl;
}