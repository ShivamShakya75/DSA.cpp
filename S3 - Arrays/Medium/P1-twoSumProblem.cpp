//                   2 Sum Problem(Burte-force solution)


#include<bits/stdc++.h>
using namespace std;


//  arr[] = {2,6,5,8,11}    target = 14;

void twoSumProblem(int arr[], int n, int target) {
    for (int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if(arr[i] + arr[j] == target){
                cout << "two element are " << arr[i] << " and " << arr[j];
            }
        }
    }
}

int main() {

    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 14;
    cout<< n << endl;
    twoSumProblem(arr,n,target);
}

