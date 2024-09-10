#include "linkedlist.h"
#include<bits/stdc++.h>
using namespace std;

//yahan humnae bina kuch define kiyae hi use kar liya hai in functions ko.
//inko humnae declare kiya in "./linkedlist.h" maein 
//but inko define kiya hai in "4arrayToLinked.cpp" maein
//jissae baar baar humaein in functions ko har file maein likhna na pade.

//<-----------Things to be remember------------->
//1)jab multiple files use karo tab sirf aek file hi aisi hogi
//jismae "main()" function hoga baaki kisi maein nahi hoga

//2)before executing you need to create an "object" file using following syntax:-
//'g++ 5deleteFirst.cpp 4arrayToLinked.cpp -o linkedlistapp' (files b/w 'g++' and '-o' are jinko link karna hai)
//'linkedlistapp.exe' is object file which is link of above files.
//and each time execute using syntax -->('./filepath.exe') and just enter it will run.

Node* deleteFirstElement(Node* head){

    //check for if there is no element
    if(head == nullptr) return head;

    //if there is an element
    Node* temp = head; // it will point to first node so that we can free it from memory
    head = head -> next;

    //to free temp node(deleted node)
    //in 'JAVA' there is an garbage collector so you don't need to do it manually but
    //in 'cpp' you need to do it manually.
    delete temp;
    return head;
}



int main(){
    vector<int> arr = {1 , 2 , 3 , 4 , 5 , 6};
    
    //converting above "arr" to "linkedlist"
    Node* head = arrayToLL(arr);

    head = deleteFirstElement(head);

    tarversalLL(head);




    return 0;
}