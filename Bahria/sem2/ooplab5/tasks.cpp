#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    Book(const string& title, const string& author, int publicationYear)
        : title(title), author(author), publicationYear(publicationYear) {}

    const string& getTitle() const { return title; }
    const string& getAuthor() const { return author; }
    int getPublicationYear() const { return publicationYear; }
};

class BookManager {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added." << endl;
    }

    void removeBookByTitle(const string& title) {
        auto it = find_if(books.begin(), books.end(), [&](const Book& book) {
            return book.getTitle() == title;
        });

        if (it != books.end()) {
            books.erase(it);
            cout << "Book removed." << endl;
        } else {
            cout << "Book not found." << endl;
        }
    }

    void listBooks() const {
        if (books.empty()) {
            cout << "No books in the library." << endl;
        } else {
            cout << "List of books:" << endl;
            for (const auto& book : books) {
                cout << "Title: " << book.getTitle() << endl;
                cout << "Author: " << book.getAuthor() << endl;
                cout << "Publication Year: " << book.getPublicationYear() << endl;
                cout << endl;
            }
        }
    }
};

int main() {
    BookManager manager;
    string command;

    cout << "Welcome to the Book Management System!" << endl;

    while (true) {
        cout << "\nEnter a command (add, remove, list, quit): ";
        cin >> command;

        if (command == "add") {
            string title, author;
            int year;
            cout << "Enter book title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter book author: ";
            getline(cin, author);
            cout << "Enter publication year: ";
            cin >> year;
            manager.addBook(Book(title, author, year));
        } else if (command == "remove") {
            string title;
            cout << "Enter the title of the book to remove: ";
            cin.ignore();
            getline(cin, title);
            manager.removeBookByTitle(title);
        } else if (command == "list") {
            manager.listBooks();
        } else if (command == "quit") {
            cout << "Exiting the program." << endl;
            break;
        } else {
            cout << "Invalid command. Please try again." << endl;
        }
    }

    return 0;
}
