#include<iostream>
using namespace std;

int main(){
    //Printing prime number from "1" to "n".
    //Hum isae aur optimise kar sakte hain but abhi kae liye itna paryapt hai.
    int n, flag=1;
    cin>>n;
    cout << "--------------------"<<endl;
    for(int i=1;i<=n;i++){
        flag = 1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag = 0;
            }
        }
        if(flag==1){
            cout<<i<<endl;
        }
    }
    return 0;
}

//-->i/2 tak kyun kiya ka doubt aa sakta hai tumko isliye reason mention kar diya hai check kar lo.
// The inner loop checks for divisors only up to `i/2` because, in a given pair of factors, the larger factor is always equal to or greater than the square root of the number.

// Consider any number `N` and its factors `a` and `b` such that `N = a * b`. If `a` is less than or equal to `b`, then `a` must be less than or equal to the square root of `N`. This is because if `a` were greater than the square root, then `b` would have to be less than the square root to satisfy the equation, which contradicts our assumption that `a` is greater than `b`.

// So, when checking for divisors, you only need to check up to the square root of the number being tested. In the given code, checking up to `i/2` is sufficient because, if there were a factor larger than `i/2`, the corresponding factor smaller than `i/2` would have been already checked earlier in the loop.

// Checking up to `i/2` is an optimization that reduces the number of iterations in the inner loop, making the primality check more efficient. The code could be further optimized by checking up to the square root of `i` instead of `i/2`, but this would require using a floating-point comparison or converting `i` to its square root as an integer, which might introduce precision issues.