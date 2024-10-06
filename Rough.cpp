#include<bits/stdc++.h>
using namespace std;

bool prime(int num){

    for(int i = 2 ; i * i <= num ; i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}


int main(){

    int n = 70;

    for(int i = 2 ; i < n ; i++){
        if(prime(i)){
            cout << i << " ";
        }
    }

    return 0;
}