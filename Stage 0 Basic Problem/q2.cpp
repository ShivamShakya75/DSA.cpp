// Checking for Prime Numbers
// Difficulty: Easy
// Topics: Basic Programming, Number Theory
// Description: Write a program to determine if a number is prime.
// Example:
// Input: number = 7
// Output: Prime
// Explanation: 7 has no divisors other than 1 and itself, so it is a prime number.


// ** Explanation:--   Prime no. ke two factor hote hai 1 and wo khud, tho 1 or jis no. ko check karenge mtlb khud unhe chod ke sabko compare karenge.


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n <= 1){
        return false;
    }
    for(int i=2; i < n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }
}