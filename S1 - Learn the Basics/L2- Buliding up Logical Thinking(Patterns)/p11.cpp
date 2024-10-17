//  p11:

//    *
//    **
//    ***
//    ****
//    *****
//    ****
//    ***
//    **
//    *

// {rows=10}-- outer loop will run (2n-i) times.

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n){
    for (int i = 1; i<= 2*n-1; i++) {
        int stars = i;
        if(i>n) stars = 2*n - i;
        for (int j = 1; j<stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}


int main(){
     int t;                 // text cases.
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        printPattern(n); 
    }

}