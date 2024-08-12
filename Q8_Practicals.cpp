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
