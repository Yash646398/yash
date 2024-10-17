#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int grade;

public:
    // Constructor
    Student(string n, int g) : name(n), grade(g) {}

    // Function to display student information
    void display() const {
        cout << "Name: " << name << ", Grade: " << grade << endl;
    }
};

int main() {
    // Create an array of Student objects
    const int SIZE = 3; // Number of students
    Student students[SIZE] = {
        Student("Alice", 90),
        Student("Bob", 85),
        Student("Charlie", 92)
    };

    // Display information about each student
    for (int i = 0; i < SIZE; ++i) {
        students[i].display();
    }

    return 0;
}
