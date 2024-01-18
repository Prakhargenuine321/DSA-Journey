#include<bits/stdc++.h>
using namespace std;

//Print numbers from 'N' to '1'.

void printNumberReverse(int n){
    if(n==0){
        return;
    }
    else{
        cout << "Count: "<<n<<endl;
        printNumberReverse(n-1);
    }
}

int main(){
    int n;
    cout << "Enter the Number!"<<endl;
    cin >> n;
    printNumberReverse(n);
    return 0;
}