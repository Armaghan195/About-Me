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
    // Constructor
    Book(const string& title, const string& author, int publicationYear)
        : title(title), author(author), publicationYear(publicationYear) {}

    // Getters
    const string& getTitle() const { return title; }
    const string& getAuthor() const { return author; }
    int getPublicationYear() const { return publicationYear; }
};

class BookManager {
private:
    vector<Book> books;
    auto isAuthorEqual(const string& author) {
        return [&](const Book& book) {
            return book.getAuthor() == author;
        };
    }
    auto isPublicationYearEqual(int year) {
        return [&](const Book& book) {
            return book.getPublicationYear() == year;
        };
    }

public:
    // Add a book to the collection
    void addBook(const Book& book) {
        books.push_back(book);
    }

    // Remove a book from the collection by title
    void removeBookByTitle(const string& title) {
        books.erase(remove_if(books.begin(), books.end(),
                              [&](const Book& book) {
                                  return book.getTitle() == title;
                              }), books.end());
    }

    void removeBookByAuthor(const string& author) {
        books.erase(remove_if(books.begin(), books.end(), isAuthorEqual(author)),
                    books.end());
    }

    void removeBookByPublicationYear(int year) {
        books.erase(remove_if(books.begin(), books.end(), isPublicationYearEqual(year)),
                    books.end());
    }

    // List all books in the collection
    void listBooks() const {
        for (const auto& book : books) {
            cout << "Title: " << book.getTitle() << endl;
            cout << "Author: " << book.getAuthor() << endl;
            cout << "Publication Year: " << book.getPublicationYear() << endl;
            cout << endl;
        }
    }
};

int main() {
    BookManager manager;

    // Adding books
    manager.addBook(Book("Book1", "Author1", 2000));
    manager.addBook(Book("Book2", "Author2", 2010));
     manager.addBook(Book("Book3", "Author3", 2014));
      manager.addBook(Book("Book4", "Author4", 2017));
    manager.addBook(Book("Book5", "Author5", 2020));

    // Listing books
    cout << "List of books:" << endl;
    manager.listBooks();

    // Removing a book
    manager.removeBookByTitle("Book2");
    manager.removeBookByAuthor("Author3");

    // Listing books after removal
    cout << "List of books after removal:" << endl;
    manager.listBooks();

    return 0;
}
