//This part includes Parth Bhanti's(23BCE11758) contribution to the code:
#include <iostream>
using namespace std;

// Template function to find the largest of three numbers
template <typename T>

//Parth Bhanti(23BCE11758) has concluded his part.
//This part includes Syed Taha Rizvi's(23BCE10981) contribution to the code:
T findLargest(T a, T b, T c) {
    T max = a; // Assume a is the largest

    if (b > max) {
        max = b;
    }
//Syed Taha Rizvi(23BCE10981) has concluded his part.
//This part includes Vartika Vashishtha (23BCE11137) contribution to the code:
    if (c > max) {
        max = c;
    }

    return max;
}
//Vartika Vashishtha (23BCE11137) has concluded her part.

//This part includes Sumit Prajapati (23BCE10122) contribution to the code:

int main() {
    int a = 5, b = 9, c = 3;
    cout << "Largest of " << a << ", " << b << ", and " << c << " is: " << findLargest(a, b, c) << endl;

    double x = 5.5, y = 9.9, z = 3.3;
    cout << "Largest of " << x << ", " << y << ", and " << z << " is: " << findLargest(x, y, z) << endl;

//Sumit Prajapati (23BCE10122) has concluded her part.

//This part includes Naman Dhakad(23BCE11359) contribution to the code:
float p = 4.2f, q = 4.2f, r = 7.1f;
    cout << "Largest of " << p << ", " << q << ", and " << r << " is: " << findLargest(p, q, r) << endl;

    return 0;
}
//Naman Dhakad(23BCE11359) has concluded his part.
