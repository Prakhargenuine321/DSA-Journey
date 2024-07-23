#include<bits/stdc++.h>
using namespace std;

int fiboNum(int num){
    if(num <= 1){
        return num;
    }
    int lastNum = fiboNum(num-1); //First it will be called and returned then below function call be made
    int secondLastNum = fiboNum(num-2);
    return lastNum + secondLastNum;
}

int main(){

    //Using fibonacci number example to understand it
    int num = 4;
    cout << "Fibonacci number at: " << num << " position is: " << fiboNum(num) << endl;

    //TC = O(2^n) -->We can further optimise it using dynamic programming but for now leave it here.


    //One more way to solve fibonacci number is
    // int fib(int n) {
    //     int l = 0;
    //     int r = 1;
    //     int temp;
    //     if (n <= 1) {
    //         return n;
    //     } else {
    //         for (int i = 2; i <= n; i++) {
    //             temp = l;
    //             l = r;
    //             r = temp + r;
    //         }
    //         return r;
    //     }
    // }
    return 0;
}