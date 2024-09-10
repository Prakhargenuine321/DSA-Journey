#ifndef LINKEDLISHFUNC_H
#define LINKEDLISHFUNC_H

#include<vector>
#include<iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    // Constructors
    Node();
    Node(int data);
    Node(int data, Node* next);
};

Node* arrayToLL(std::vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover ->next = temp;
        mover = mover -> next;
    }
    return head;
}

// Optional: You can also declare other functions here if you want to use them in other files
void tarversalLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int lengthOfLL(Node* head){
    int length = 0;

    Node* temp = head;

    while(temp != nullptr){
        length++;
        temp = temp -> next;
    }

    return length;
}

#endif