#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Adding two integers: " << add(2, 3) << endl;         // Calls the first add
    cout << "Adding three integers: " << add(1, 2, 3) << endl;   // Calls the second add
    cout << "Adding two doubles: " << add(2.5, 3.5) << endl;     // Calls the third add

    return 0;
}
