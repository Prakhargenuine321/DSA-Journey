#include "./doubleLLfunc.h"
#include<bits/stdc++.h>
using namespace std;

Node::Node()
{
    this->data = 0;
    next = nullptr;
    back = nullptr;
}

Node::Node(int data)
{
    this->data = data;
    this->next = nullptr;
    this->back = nullptr;
}

Node::Node(int data, Node *next, Node* back)
{
    this->data = data;
    this->next = next;
    this->back = back;
}


Node* deletionDLL(Node* head, int position){

    //if DLL is empty or having only 1 element
    if(head == nullptr || head->next == nullptr){
        delete head;
        head = nullptr;
        return head;
    }

    Node* temp = head;
    
    //if we have to delete at position "0"
    if(position == 0){
        head = temp->next;
        head->back = nullptr;
        temp->next = nullptr;
        delete temp; //clearing up memory
        return head;
    }

    //for other positions
    int count = 0;

    //finding out element to be deleted
    while(count != position){
        temp = temp->next;
        count++;
    }

    temp->back->next = temp->next;

    //following code will not run if we have to delete last element
    if(temp->next != nullptr){
        temp->next->back = temp->back;
    }
    delete temp;
    return head;


}

int main(){
    vector<int> newArr = {1, 2, 3, 4, 5, 6};

    //following function is created by in my own header file so you can
    //checkout whole implementation there
    Node* head = arrayToDLL(newArr);

    //deletion in DLL
    head = deletionDLL(head, 0);

    //traversal 
    tarversalDLL(head);

    return 0;
}