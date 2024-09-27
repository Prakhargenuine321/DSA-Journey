#include<bits/stdc++.h>
using namespace std;

struct Node{

    int data;
    Node* next;
    Node* prev;

    Node(){
        this->data = 0;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

int main(){
    int num2 = 303;
    int num = 10;
    int* p1 = &num;
    int** p2 = &p1;
    int num1 = 30;
    p1 = &num1;
    cout << **p2 << endl;
    cout << p2 << endl;



    return 0;
}