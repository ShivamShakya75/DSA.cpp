#include<bits/stdc++.h>
using namespace std;

//function are set of code which perform somethings for us.
//function are used to modularise code.
//function are used to increase readabilily.
//function are used to use same code multiple times.

//void -> which does not return anything
//return, parameterised, non-parameterised.

void printName(string name) {
    cout << "hey " << name << endl;

}

int sumNum(int a, int b) {
    return a + b;
}

int main() { 
    string name;
    cin >> name;
    printName(name);

    int a, b;
    cin >> a >> b;
    int res = sumNum(a , b);
    cout << res;


    // write a program to sum two number


    return 0;
}