#include <iostream>
#include <string>
using namespace std;

class Book {
public:
 string title;
 string author;
 int year;
 Book(string t, string a, int y) : title(t), author(a), year(y) {}
 ~Book() {}
 void print() { cout << "Title: " << title << endl;
  cout << "Author: " << author << endl;
  cout << "Year: " << year << endl;
 }
};

int main() {        
    Book book1("The Hobbit", "<NAME>", 1937);
    Book book2("Atomic Habbits", "james clear", 2018);
    Book book3("dotcom theory", "idk", 2004);
    Book book4("the fall", "Albart Camus", 1969);

    book1.print();
    book2.print();
    book3.print();
    book4.print();
 // Tabnine might suggest methods like getters or setters here.
};