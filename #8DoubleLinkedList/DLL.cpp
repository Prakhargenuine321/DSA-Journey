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


int main(){
    vector<int> newArr = {1, 2, 3, 4, 5, 6};

    //following function is created by in my own header file so you can
    //checkout whole implementation there
    Node* head = arrayToDLL(newArr);

    //tarversal of an doubly linked list
    tarversalDLL(head);

    //length of DLL
    cout << endl;
    cout << lengthOfDLL(head) << endl;


    return 0;
}
