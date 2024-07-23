#include<bits/stdc++.h>
using namespace std;


//In this we will learn about: 1)Base Case 2)Stack Overflow 3)Recursion Tree

void printNumbers(int count){
    if(count == 3){
        return;
    }
    cout << count << " ";
    count++;
    printNumbers(count);
}

int main(){

    int count = 0;

    printNumbers(count);

    return 0;
}