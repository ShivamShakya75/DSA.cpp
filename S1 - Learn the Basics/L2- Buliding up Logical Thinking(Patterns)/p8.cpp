// p8:-

//    
//       *     
//      ***
//     *****
//    ******* 
//   *********

//   spaces,   star,    spaces
//   (n-i-1), (2*i+1), (n-i-1)

#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 0; i<n; i++) {         
        //spaces
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        //stars
        for (int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        cout << endl;          
    }
}

int main() {

    int t;                 // text cases.
    cin >> t;
    for (int i=0; i<t; i++){
        int n;
        cin >> n;
        printPattern(n);
    }

}
