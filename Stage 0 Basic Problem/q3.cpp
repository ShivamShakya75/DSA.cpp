// Validating Leap Years
// Difficulty: Easy
// Topics: Basic Programming, Date Handling
// Description: Write a program to check if a given year is a leap year.
// Example:
// Input: year = 2020
// Output: Leap Year
// Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.

// LEAP YEAR:--  which has 366days.

//                   What are the conditions for a leap year?

// Every year that is exactly divisible by four is a leap year, except for years that are exactly divisible by 100, but these centurial years are leap years if they are exactly divisible by 400. For example, the years 1700, 1800, and 1900 are not leap years, but the years 1600 and 2000 are.


#include<bits/stdc++.h>
using namespace std;

bool checkLeapYear(int n) {
    if(n % 400 == 0) {
        return true;
    }
    else if(n % 100 == 0) {
        return false;
    }
    else if(n % 4 == 0) {
        return true;
    }
    else{
        return false;
    }
}


int main() {
    int n;
    cin >> n;
    checkLeapYear(n) ? cout << "leap year" : cout << "Not leap Year";
}