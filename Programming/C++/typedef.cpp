#include <iostream>
using std::cout;

typedef struct {
    std::string name;
} Person;

// without typedef: struct Person p1
Person p1;

typedef std::string PersonName;
typedef int num_t;

int main() {
    p1.name = "John";
    cout << p1.name << std::endl;

    PersonName first_name = "Bob";
    num_t x = 5;
    num_t y = 5;

    cout << first_name << std::endl;
    cout << x + y << std::endl;
    
    return 0;
}
