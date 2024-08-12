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
