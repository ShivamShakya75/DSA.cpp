// p2:- take an input and print n*n.



#include<bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    for (int i = 0; i<n; i++) {       // 4 rows
        for (int j = 0; j<n; j++) {   // 4 cols
            cout << "*";
        } 
        cout << endl;                 // next line.
    }
}

int main() {

    int x;
    cin >> x;
    printPattern(x);

}
