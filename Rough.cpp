#include<bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
    int topElem();
};

void MyStack ::push(int x) {
    // Your Code
    if(top < 1000){
        top++;
        arr[top] = x;
    }
}

int MyStack:: topElem(){
    return arr[top];
}

int main(){

    MyStack* stack = new MyStack();
    stack->push(10);
    stack->push(20);
    stack->push(30);
    cout << stack->topElem();

    return 0;
}