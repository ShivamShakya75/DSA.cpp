#include<bits/stdc++.h>
using namespace std;


int sumNum(int n){
    if(n==0) return 0;
    return n + sumNum(n-1);

}

int main() {
    int n;
    cin >> n;
    cout << sumNum(n) << endl;
    return 0;

}   
   
