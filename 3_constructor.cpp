#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    // Constructor
    Book(string t, string a) {
        title = t;
        author = a;
        cout << "Constructor called: Book titled '" << title << "' by " << author << " created." << endl;
    }

    // Destructor
    ~Book() {
        cout << "Destructor called: Book titled '" << title << "' is being destroyed." << endl;
    }

    // Function to display book details
    void display() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    // Create a Book object
    Book myBook("1984", "George Orwell"); // Constructor is called

    // Display book details
    myBook.display();

    // Destructor will be called automatically when myBook goes out of scope
    return 0;
}
