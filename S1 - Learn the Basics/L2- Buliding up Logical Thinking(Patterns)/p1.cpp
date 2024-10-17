// PATTERNS:-

//                        RULES TO PRINT PATTERNS:
// ->  Nested Loops
// ->  we have two loops: outer loops and inner loops.
//                --> outer loops is for rows, count the no. of lines/rows.
//                --> inner loops is for columns, focus on the colums and  connect them some how to the rows.

// ->  print `*` inside the inner for loop.
// -> print ` ` space inside the outer loop.
// -> observe symmetry [optional].

//   P1:  ****
//        ****
//        ****
//        ****

 
#include<bits/stdc++.h>
using namespace std;

int main() {

    for (int i = 0; i<4; i++) {       // 4 rows
        for (int j = 0; j<4; j++) {   // 4 cols
            cout << "*";
        } 
        cout << endl;                 // next line.
    }
}