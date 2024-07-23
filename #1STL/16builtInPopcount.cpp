#include<bits/stdc++.h>
using namespace std;

int main(){


    //__builtin_popcount() --> The function takes an unsigned integer as input parameter and returns the number of set bits(no. of 1's) present in that integer
    int num = 7;
    int count = __builtin_popcount(num);
    cout << "No. of set bits: " << count << endl;


    //__builtin_popcountll() -->Same but for "long long"
    long long numOne = 165786578687;
    int countOne = __builtin_popcountll(numOne);
    cout << "No. of set bits: " << countOne << endl;

    return 0;
}