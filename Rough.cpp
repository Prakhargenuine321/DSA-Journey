#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 10;
    int* p1 = &num;
    int** p2 = &p1;
    int num1 = 30;
    p1 = &num1;
    cout << **p2 << endl;


    return 0;
}