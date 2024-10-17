#include <iostream>

class Complex {
public:
    double real;
    double imag;

    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload the + operator
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the << operator for output
    friend std::ostream& operator<<(std::ostream& out, const Complex& c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(1.5, 2.5);
    Complex c2(2.0, 3.0);
    Complex c3 = c1 + c2; // Uses overloaded + operator

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3: " << c3 << std::endl; // c3: 3.5 + 5.5i

    return 0;
}
