#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.pop();

    int a = 0 , b = 0;

    cout << stk.size() << endl;

    cout << a << "--" << b << endl; 

    return 0;
}