#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int yearPublished;

public:
    Book() : title("unknown title"), author("unknown author"), yearPublished(0) {}
   Book(string t, string a, int y) : title(t), author(a), yearPublished(y) {}
    
    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author << ", Year Published: " << yearPublished << endl;
    }
};
int main() {
    Book books[5];
    for (int i = 0; i < 5; ++i) {
        books[i].displayInfo();
    }

    return 0;
}
