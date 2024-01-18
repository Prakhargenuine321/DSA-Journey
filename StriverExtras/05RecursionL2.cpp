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


//Also review following code(Return '1' to 'N' numbers) and understand by making recursion diagram.

// vector<int> printNos(int x) {

//     if(x==0){

//         vector<int>ans;

//         return ans;

//     }

//     vector<int> ans=printNos(x-1);

//     ans.push_back(x);

//     return ans;

// }