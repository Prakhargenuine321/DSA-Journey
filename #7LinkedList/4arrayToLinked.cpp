//here we are converting array to linked list.

#include<bits/stdc++.h>
using namespace std;

//defining structure of node of linked list

class Node{

    public:

    int data;
    Node* next;

    Node(){
        this->data = 0;
        next = nullptr;
    }

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }

    Node(int data, Node* next){
        this->data = data;
        this->next = next;
    }
};

//function to convert array to linked list
Node* arrayToLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover ->next = temp;
        mover = mover -> next;
    }
    return head;
}


//traversing whole linked list

void tarversalLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}


//length of a linked list
int lengthOfLL(Node* head){

    int length = 0;

    Node* temp = head;

    while(temp != nullptr){
        length++;
        temp = temp -> next;
    }

    return length;
}


int main(){

    vector<int> arr = {1 , 2 , 3 , 4 , 5 , 6};
    Node* head = arrayToLL(arr);

    //traversing whole linked list
    tarversalLL(head);
    cout << endl;
    
    //length of an linked list
    int lengthOfLinked = lengthOfLL(head);
    cout << "Length of Linked List: " << lengthOfLinked << endl;

    return 0;
}