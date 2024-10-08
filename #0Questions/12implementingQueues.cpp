#include<bits/stdc++.h>
using namespace std;

class Queue{
    private:
    int arr[2];
    int front;
    int rear;

public :
    Queue(){front=-1;rear=-1;} //constructor
    void push(int);
    int pop();
    int top();
};

void Queue::push(int n){
    if(front == -1 && rear == -1){
        front++;
        rear++;
        arr[rear] = n;
    }else if(front > 0 && rear == 2 - 1){
        rear = (rear + 1) % 2;
        arr[rear] = n;
    }else{
        rear++;
        arr[rear] = n;
    }
}

int Queue::top(){
    return arr[rear];
}


int main(){

    Queue* q = new Queue();
    q->push(10);
    q->push(20);
    q->push(23);

    cout << q->top() << endl;


    return 0;
}