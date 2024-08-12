//This part includes Parth Bhanti's(23BCE11758) contribution to the code:
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate
using namespace std;

template <typename T>
class Vector {
private:
    vector<T> elements; // Underlying vector to store elements

public:
    // Constructor to initialize the vector with elements
    Vector(const vector<T>& elems) : elements(elems) {}

    // Function to find the smallest element in the Vector
    T findSmallest() const {
        if (elements.empty()) {
            throw runtime_error("Vector is empty.");
        }
        return *min_element(elements.begin(), elements.end());
    }
//Parth Bhanti(23BCE11758) has concluded his part.
//This part includes Syed Taha Rizvi's(23BCE10981) contribution to the code:
// Function to search for an element in the Vector
    bool searchElement(const T& element) const {
        return find(elements.begin(), elements.end(), element) != elements.end();
    }
//Syed Taha Rizvi(23BCE10981) has concluded his part.
//This part includes Vartika vashishtha(23BCE11137) contribution to the code:
// Function to find the average of the elements in the Vector
    double findAverage() const {
        if (elements.empty()) {
            throw runtime_error("Vector is empty.");
        }
        T sum = accumulate(elements.begin(), elements.end(), T(0));
        return static_cast<double>(sum) / elements.size();
    }
//Vartika Vashishtha(23BCE11137) has concluded her part.


//This part includes Sumit Prajapati(23BCE10122) contribution to the code:
// Function to display the elements of the Vector
    void display() const {
        for (const T& elem : elements) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

// Sumit Prajapati(23BCE10122) has concluded her part.

//This part includes Naman Dhakad(23BCE11359) contribution to the code:
int main() {
    vector<int> intVector = {3, 8, 1, 6, 9, 4};
    Vector<int> intVec(intVector);

    cout << "Elements in the integer Vector: ";
    intVec.display();

    cout << "Smallest element: " << intVec.findSmallest() << endl;

    int searchValue = 6;
    cout << "Is " << searchValue << " in the Vector? " << (intVec.searchElement(searchValue) ? "Yes" : "No") << endl;

    cout << "Average of elements: " << intVec.findAverage() << endl;

    vector<double> doubleVector = {2.5, 7.1, 3.3, 5.9, 8.0};
    Vector<double> doubleVec(doubleVector);

    cout << "\nElements in the double Vector: ";
    doubleVec.display();

    cout << "Smallest element: " << doubleVec.findSmallest() << endl;

    double searchDouble = 3.3;
    cout << "Is " << searchDouble << " in the Vector? " << (doubleVec.searchElement(searchDouble) ? "Yes" : "No") << endl;

    cout << "Average of elements: " << doubleVec.findAverage() << endl;

    return 0;
}
// Naman Dhakad(23BCE11359) has concluded his part.
