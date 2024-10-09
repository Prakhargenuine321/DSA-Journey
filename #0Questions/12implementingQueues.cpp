#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    static const int size = 20; // if we will declare it just with "int" it will throw an error
    // as array is of static size so need to declare "size" variable as an "static const".
    int arr[size];
    int rear;
    int front;
    int currentSize;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        currentSize = 0;
    }
    void push(int);
    int pop();
    int top();
};

void Queue::push(int n)
{

    // if queue is full then return and print "overflow"
    if (currentSize == size)
    {
        cout << "Overflow" << endl;
        return;
    }

    // if "rear" and "front" are at -1 that means "currentsize == 0"
    if (currentSize == 0)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear + 1) % size;
    }

    arr[rear] = n;
    currentSize++;
}

int Queue::pop()
{

    // if queue is empty
    if (currentSize == 0)
    {
        cout << "Underflow" << endl;
        return -1;
    }

    // storing popped number to return it
    int poppedNumber = arr[front];

    // if queue has only "1" number than just destory the queue
    if (currentSize == 1)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % size;
    }
    
    currentSize--;

    return poppedNumber;
}

int Queue::top()
{
    if(front == -1){
        return -1;
    }

    return arr[front];
}

int main()
{

    Queue *q = new Queue();
    q->push(10);
    q->push(20);
    q->push(23);

    cout << q->top() << endl;

    q->pop();
    q->pop();
    cout << q->pop() << endl;

    cout << q->top() << endl;

    return 0;
}