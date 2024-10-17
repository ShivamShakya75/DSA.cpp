// Basic Skeleton of C++

#include<iostream>
#include<bits/stdc++.h>   // include all CPP libraries.
using namespace std;
// Here, we dont want to pass std with cout, it automaticaly pass and run program.

int main() {
    std::cout << "Hey String" << std::endl;
    // ->cout is the function which exist under std.
    // ->endl and \n used for next line.
    // -> \n is faster than endl.
    cout << "Hey String2" << "\n";
    //NOW, we dont want to pass std with cout.

    int x,y;
    cin >> x >> y;    // `cin >>` is used for input.
    cout << "value of x: " << x << " and y: " << y;  //   `cout <<` is used for output.
    return 0;
}