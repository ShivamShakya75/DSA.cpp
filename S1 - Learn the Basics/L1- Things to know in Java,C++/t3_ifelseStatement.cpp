#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // write a program to take the input of age and prints if you are adult or not.

    // int x;
    // cout << "Enter your age: ";
    // cin >> x;
    // if (x >= 18) {
    //     cout << "You are adult";
    // }
    // else {
    //     cout << "You are not adult";
    // }


    // switch statement:-

    int days;
    cin >> days;
    switch (days) {
        // switch is written with variable name.
        case 1: cout<< "monday";
        break;
        case 2: cout<< "Tuesday";
        break;
        case 3: cout<< "Wednesday";
        break;
        case 4: cout<< "Thrusday";
        break;
        case 5: cout<< "Friday";
        break;
        case 6: cout<< "Saturday";
        break;
        case 7: cout<< "Sunday";
        break;
        default: cout << "Invalid";

    }

   

    return 0; 

}