#include<bits/stdc++.h>
using namespace std;

//Print number from 'N' to '1' using backtracking method.

//defining function mehtod1-->
// void printNos(int n , int i){
//     if(i==0){
//         return;
//     }
//     else{
//         cout << i << " ";
//         printNos(n , i-1);
//     }
// }

//defining function mehtod2-->
void printNos(int n , int i){
    if(i>n){
        return;
    }
    else{
        printNos(n , i+1);
        cout << i << " ";
    }
}


int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    // printNos(n , n); //-->Declaration method1
    printNos(n,1); //-->Declaration method2
    return 0;
}