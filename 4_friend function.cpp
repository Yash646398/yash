#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Declare a friend function
    friend void printWidth(Box box);
};

// Definition of the friend function
void printWidth(Box box) {
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box box(10.5);

    // Call the friend function
    printWidth(box); // Accesses the private member width

    return 0;
}
