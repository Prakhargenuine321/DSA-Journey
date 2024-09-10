#include "./linkedlistfunc.h"
#include <bits/stdc++.h>
using namespace std;

Node::Node()
{
    this->data = 0;
    next = nullptr;
}

Node::Node(int data)
{
    this->data = data;
    this->next = nullptr;
}

Node::Node(int data, Node *next)
{
    this->data = data;
    this->next = next;
}

// common function to do all types of insertion

Node* insertionLinkedAll(int data, int position, Node* head, int length){

    //1)create node for given data
    Node* newNode = new Node(data); 

    //2)inserting at '0' (head)
    if(position == 0){
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* temp = head;
    //3)at tail(last position)
    if(position == length){
        //4)loop untill we reach last element
        while(temp->next != nullptr){ 
            temp = temp->next;
        }
        temp->next = newNode;
        return head; 
    }

    //4)any position between 'tail' and 'first'
    //first task is to reach to that index at we are assuming '0-based' indexing
    int count = 1;
    while(count != position){
        count++;
        temp = temp->next;
    }
    //temp should stop at (position-1) place
    newNode->next = temp->next;
    temp->next = newNode;
    return head;

    
}

int main(){

    vector<int> arr = {1 , 2 , 3 , 4 , 5 , 6};
    Node* head = arrayToLL(arr);
    tarversalLL(head);
    cout << endl;

    int length = lengthOfLL(head);

    int data = 10;
    int position = 3;
    if(position > length){
        cout << "Position value is greater than length of LL" << endl;
    }
    else{
        head = insertionLinkedAll(data, position, head, length);
        tarversalLL(head);
    }

    return 0;
}