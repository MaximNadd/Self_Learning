#include <iostream>
using std::cout, std::endl, std::cin, std::string;

int main() {
    string name;

    cout << "Enter your name: "; 
    std::getline(cin >> std::ws, name);

    if (name.length() >= 12){
        cout << "Your name is too long." << endl;
    }
    else {
        cout << "Welcome " << name << endl;
    }

    if (name.empty()) 
        cout << "You did not enter a name" << endl;
    else
        cout << "Your name is " << name << endl;

    name.append(" Naddaf");
    cout << "Your full name is " << name << endl;

    cout << name.insert(0, "@") << endl;
    
    cout << name.find("N") << endl;

    return 0;
}