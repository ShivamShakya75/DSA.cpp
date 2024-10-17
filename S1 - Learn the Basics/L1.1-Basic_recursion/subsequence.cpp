//   SUBSEQUENCE :-  print all the contiguous and non-contiquous sequence      which follow some order.

//    FIBONACCI NUMber;


#include<bits/stdc++.h>
using namespace std;


void f(int ind, vector<int> &ds, int arr[], int n){
    if(ind >= n){
        for(auto it: ds){
            cout << it << " ";
        }
        if(ds.size() == 0){
            cout << "{}"; 
        }
        cout << endl;
        return;
    }

    ds.push_back(arr[ind]);
    f(ind+1, ds, arr, n);  //take
    ds.pop_back();
    f(ind+1, ds, arr, n);  // not take
    
}

int main() {
    
    int arr[] = {3,1,2};
    int n= 3;
    vector<int> ds;
    f(0, ds, arr, n);

}   