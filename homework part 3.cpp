#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int yearPublished;

public:
    Book() : title("Unknown Title"), author("Unknown Author"), yearPublished(0) {}
    Book(string t, string a, int y) : title(t), author(a), yearPublished(y) {}

    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author << ", Year Published: " << yearPublished << endl;
    }

    int getYearPublished() const {
        return yearPublished;
    }
};
int findOldestBook(Book books[], int size) {
    int oldestIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (books[i].getYearPublished() < books[oldestIndex].getYearPublished()) {
            oldestIndex = i;
        }
    }
    return oldestIndex;
}
int main() {
    Book books[4] = {
        Book("dune", "frank herbert", 1965),
        Book("outsider", "S. E. Hinton", 1967),
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925),
        Book("diary of a wimpy kid ", "Jeff Kinney", 2007)
    };

    int oldestIndex = findOldestBook(books, 4);
    cout << "Oldest Book Details:" << endl;
    books[oldestIndex].displayInfo();

    return 0;
}
