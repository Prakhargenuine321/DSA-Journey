//this is an header file can use these functions where we want.

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <vector>

class Node {
public:
    int data;
    Node* next;

    // Constructors
    Node();
    Node(int data);
    Node(int data, Node* next);
};

// Function to convert an array to a linked list
Node* arrayToLL(std::vector<int>& arr);

// Optional: You can also declare other functions here if you want to use them in other files
void tarversalLL(Node* head);
int lengthOfLL(Node* head);

#endif
