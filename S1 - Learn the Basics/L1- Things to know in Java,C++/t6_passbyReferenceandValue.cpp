#include<bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(int num) {
    cout << num << endl;        //   Here's if i take reference `&num` then is 
    num += 5;                   //   change the original value
    cout <<num << endl;
    num += 5;
    cout << num << endl;
// here the original value is not coming, copy of that value comes, didn't change in original value. 

}

// pass by reference:-  do make change in original value, work with original value

//    *      ARRAY'S is always go with pass by reference.
//   ***

void dostring(string &s){  //`&` is for address,it will take address of variable
    s[0] = 't';
    cout << s << endl;
}



int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;  

    string s = "raj";
    dostring(s);
    return 0;


}