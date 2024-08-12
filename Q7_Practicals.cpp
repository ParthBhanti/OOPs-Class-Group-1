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
