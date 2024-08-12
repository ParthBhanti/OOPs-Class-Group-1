//This part includes Parth Bhanti's(23BCE11758) contribution to the code:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to hold book details
struct Book {
    int id;
    string author;
    float price;
    int pages;
    string publisher;
    int year;
};
//Parth Bhanti(23BCE11758) has concluded his part.
//This part includes Syed Taha Rizvi's(23BCE10981) contribution to the code:
// Function to read book details from standard input
vector<Book> readBooks(int n) {
    vector<Book> books(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for book " << i + 1 << ":\n";
        cout << "Book ID: ";
        cin >> books[i].id;
        cin.ignore(); // Ignore the newline after the integer input
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Price: ";
        cin >> books[i].price;
        cout << "Number of Pages: ";
        cin >> books[i].pages;
        cin.ignore(); // Ignore the newline after the integer input
        cout << "Publisher: ";
        getline(cin, books[i].publisher);
        cout << "Year of Publishing: ";
        cin >> books[i].year;
        cout << endl;
    }

    return books;
}
//Syed Taha Rizvi(23BCE10981) has concluded his part.
//This part includes Vartika Vasishtha(23BCE11137) contribution to the code:
// Function to print sorted book details to standard output
void printBooks(const vector<Book>& books) {
    for (const auto& book : books) {
        cout << "Book ID: " << book.id << endl;
        cout << "Author: " << book.author << endl;
        cout << "Price: " << book.price << endl;
        cout << "Number of Pages: " << book.pages << endl;
        cout << "Publisher: " << book.publisher << endl;
        cout << "Year of Publishing: " << book.year << endl;
        cout << endl;
    }
}
//Vartika Vasishtha (23BCE11137) has concluded her part.

//This part includes Sumit Prajapati(23BCE10122) contribution to the code:
// Comparator function to sort books by author name
bool compareAuthor(const Book& a, const Book& b) {
    return a.author < b.author;
}


//Sumit Prajapati (23BCE10122)has concluded her part.
//This part includes Naman Dhakad(23BCE11359) contribution to the code:
int main() {
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    // Read books from standard input
    vector<Book> books = readBooks(n);

    // Sort books by author name
    sort(books.begin(), books.end(), compareAuthor);

    // Print sorted books to standard output
    cout << "Books sorted by author name:\n";
    printBooks(books);

    return 0;
}
//Naman Dhakad(23BCE11359) has concluded her part.
