#include<bits/stdc++.h>
using namespace std;


int main(){

    // if we use two variables then we use "pair".
    pair<int, int> p = {1,3};
    cout<<p.first << " " << p.second;

    // store multiple Datatypes:

    pair<int,pair<int,string>> a = {5,{2, "Shakya"}};
    cout<<a.first;
    cout<<a.second.first; 

    




}