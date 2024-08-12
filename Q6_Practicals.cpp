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
//Parth Bhanti(23BCE11758) has concluded his part.
//This part includes Syed Taha Rizvi's(23BCE10981) contribution to the code:
public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    // Relational operators
    bool operator<(const Date &other) const {
        if (year < other.year) return true;
        if (year == other.year && month < other.month) return true;
        if (year == other.year && month == other.month && day < other.day) return true;
        return false;
    }

    bool operator<=(const Date &other) const {
        return *this < other || *this == other;
    }

    bool operator>(const Date &other) const {
        return !(*this <= other);
    }

    bool operator>=(const Date &other) const {
        return !(*this < other);
    }

    bool operator==(const Date &other) const {
        return year == other.year && month == other.month && day == other.day;
    }

    bool operator!=(const Date &other) const {
        return !(*this == other);
    }
//Syed Taha Rizvi(23BCE10981) has concluded his part.
//This part includes vartika vashishtha (23BCE11137) contribution to the code:
// Overload ++ to increment by one day
    Date& operator++() {
        day++;
        if (day > daysInMonth(month, year)) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        return *this;
    }

    // Overload + to add days to the current date
    Date operator+(int days) const {
        Date temp = *this;
        temp.day += days;

        while (temp.day > temp.daysInMonth(temp.month, temp.year)) {
            temp.day -= temp.daysInMonth(temp.month, temp.year);
            temp.month++;
            if (temp.month > 12) {
                temp.month = 1;
                temp.year++;
            }
        }

        return temp;
    }
//vartika vashishtha (23BCE11137) has concluded her part.
//This part includes Sumit Prajapati (23BCE10122) contribution to the code:
// Conversion to int: days elapsed in the current year
    operator int() const {
        int totalDays = day;
        for (int i = 1; i < month; i++) {
            totalDays += daysInMonth(i, year);
        }
        return totalDays;
    }

    // Function to display the date
    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};
//Sumit Prajapati (23BCE10122) has concluded his part.


