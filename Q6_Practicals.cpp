//This part includes Parth Bhanti's(23BCE11758) contribution to the code:
#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    // Helper function to check if a year is a leap year
    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Helper function to get the number of days in a month
    int daysInMonth(int month, int year) const {
        switch (month) {
            case 2: return isLeapYear(year) ? 29 : 28;
            case 4: case 6: case 9: case 11: return 30;
            default: return 31;
        }
    }
//Parth Bhanti's(23BCE11758) has concluded his part.
