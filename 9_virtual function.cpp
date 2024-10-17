#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override {  // Override the base class function
        cout << "Dog barks" << endl;
    }
};

// Derived class Cat
class Cat : public Animal {
public:
    void sound() override {  // Override the base class function
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal* animalPtr;  // Pointer to the base class

    Dog dog;
    Cat cat;

    // Point to a Dog object
    animalPtr = &dog;
    animalPtr->sound();  // Calls Dog's sound()

    // Point to a Cat object
    animalPtr = &cat;
    animalPtr->sound();  // Calls Cat's sound()

    return 0;
}
