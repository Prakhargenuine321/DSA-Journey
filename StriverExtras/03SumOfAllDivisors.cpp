#include<iostream>
using namespace std;

int main(){
    //SUM OF DIVISORS OF ALL NUMBERS UPTO N.
    // int sum = 0;
    int n = 100;
	// for(int i = 1 ; i <= n ; i++){
	// 	for(int j = 1 ; j*j<=i ; j++){
	// 		if(i%j==0){
	// 			sum = sum + j;
	// 			if(i/j!=j){
	// 				sum = sum + i;
	// 			}
	// 		}
	// 	}
	// }
     long long sum = 0;

    for (long long i = 1;i*i<=n; i++) {

        long long t1 = i * (n / i - i + 1);

        long long t2 = (((n / i) * (n / i + 1)) / 2) - ((i * (i + 1)) / 2);

        sum += t1 + t2;

    }

	cout << sum <<endl;
}