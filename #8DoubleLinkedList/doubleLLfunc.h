#ifndef DOUBLELLFUNC_H
#define DOUBLELLFUNC_H

#include<vector>
#include<iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;
    Node* back; //it will store address of previous node

    // Constructors
    Node();
    Node(int data);
    Node(int data, Node* next, Node* back);
};

Node* arrayToDLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* back = head; //it will help to update back of next node.
    for(int i = 1 ; i < arr.size() ; i++){
        Node* currNode = new Node(arr[i]);
        back->next = currNode;
        currNode->back = back;
        //and then update back to current node
        back = currNode;
    }
    return head;
}

// Optional: You can also declare other functions here if you want to use them in other files
void tarversalDLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int lengthOfDLL(Node* head){
    int length = 0;

    Node* temp = head;

    while(temp != nullptr){
        length++;
        temp = temp -> next;
    }

    return length;
}

#endif