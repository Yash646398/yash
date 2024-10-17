#include <iostream>
using namespace std;

// Virtual Base Class
class A {
public:
    A() {
        cout << "Constructor of A" << endl;
    }
};

// Derived class B
class B : virtual public A {
public:
    B() {
        cout << "Constructor of B" << endl;
    }
};

// Derived class C
class C : virtual public A {
public:
    C() {
        cout << "Constructor of C" << endl;
    }
};

// Final derived class D
class D : public B, public C {
public:
    D() {
        cout << "Constructor of D" << endl;
    }
};

int main() {
    D d; // Create an object of class D
    return 0;
}
