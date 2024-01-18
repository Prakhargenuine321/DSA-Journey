#include<bits/stdc++.h>
using namespace std;

//Problem(link)--> https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435

//Method1-->
// int ifFact(int i){
//     if(i==1 || i==0){
//         return 1;
//     }
//     else{
//         return i*ifFact(i-1);
//     }
// }

// vector<long long> factorialNumbers(long long n) {
//     // Write Your Code Here
//     int num;
//     bool flag = 1;
//     int i =1;
//     vector<long long> ans;
//     while(flag){
//         num = ifFact(i);
//         if(num <= n){
//             ans.push_back(num);
//             i++;
//         }
//         else{
//             flag = 0;
//         }
//     }
//     return ans;
// }


int main(){
    long long n;
    cout << "Enter the number" << endl;
    cin >> n;
    vector<long long> ans = factorialNumbers(n);
    for(auto i = ans.begin() ; i!=ans.end() ; i++){
        cout << *(i)<<" ";
    }
    return 0;
}