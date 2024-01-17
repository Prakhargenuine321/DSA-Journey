#include<bits/stdc++.h>
using namespace std;

//Problem-->Printing name for given "n" number of times.

//Here Time Complexity is: O(n).
//Here Space Complexity is: O(n).-->calculated as space stack.

//function definition
void printName(int n , string name , int i){
    if(i>n){
        return;
    }
    else{
        cout << "Count: "<<i<<" "<<name<<endl;
        printName(n,name,i+1); //yahan par tumnae (i++) kiya tha but woh tumhae nahi karna hai because -->The post-increment operator changes the value of 'i' after its current value is used in the expression, which results in an infinite recursion and stack overflow.
    }
}

int main(){
    int n;
    string name;
    cout << "Enter number of times to print your name!"<<endl;
    cin >> n;
    cout << "Enter your name!"<<endl;
    cin >> name;
    printName(n,name,1);
    return 0;
}