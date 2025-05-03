#include <iostream>
#include <string>
using namespace std;
class Library {
public:
    string bookTitle;
     Library(string title) {
        bookTitle = title;
    }
     void displayBook() {
        cout << "Book Title: " << bookTitle << endl;
    }
};


class LibTs : public Library {
public:
    bool isBorrowed;


    LibTs(string title) : Library(title) {
        isBorrowed = false;
    }


    void borrowBook() {
        if (isBorrowed) {
            cout << "Sorry, the book is already borrowed." << endl;
        } else {
            isBorrowed = true;
            cout << "You have borrowed \"" << bookTitle << "\"." << endl;
        }
    }


    void returnBook() {
        if (isBorrowed) {
            isBorrowed = false;
            cout << "You have returned \"" << bookTitle << "\"." << endl;
        } else {
            cout << "The book was not borrowed." << endl;
        }
    }
};


int main() {

   LibTs book1("C++ Programming");


    book1.displayBook();
    book1.borrowBook();
    book1.borrowBook();
    book1.returnBook();
    book1.returnBook();

    return 0;
}


