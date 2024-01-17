#include<bits/stdc++.h>

using namespace std;

//Problem-->Print linearly from '1' to 'N'.

void printNumber(int i , int n){
    if(i>n){
        return;
    }
    else{
        cout << "Count: "<< i << endl;
        printNumber(i+1,n);
    }
}

int main(){
    int n ;
    cout<< "Enter the number" <<endl;
    cin >> n;
    printNumber(1,n);
    return 0;
}