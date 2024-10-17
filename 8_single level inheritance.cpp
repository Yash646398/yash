#include <iostream>
using namespace std;

// Base Class
class Base {
public:
    Base() {
        cout << "Base class constructor called!" << endl;
    }
};

// Derived Class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called!" << endl;
    }
};

int main() {
    cout << "Creating object of Derived class:" << endl;
    Derived d;  // This will call both constructors

    return 0;
}
