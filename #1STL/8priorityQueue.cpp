#include<bits/stdc++.h>
using namespace std;

//Priority Queue -->Numbers , string or character are arranged in terms of priority whether it is set as for max or min.
//From inside it is like a tree formation as seen in MAX & MIN HEAP.
//Time Complexity: PUSH & POP--> O(logN) and TOP-->O(1).

int main(){


    //declaration for MAX-HEAP
    priority_queue<int> pq;


    //Inserting Elements
    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}


    //Accessing the TOP
    cout << pq.top(); // prints 10


    //Popping up the element
    pq.pop(); // {8, 5, 2}
    cout << pq.top(); // prints 8


    //declaration for MIN-HEAP
    priority_queue<int, vector<int>, greater<int>> pq; //search and update here why we write like this
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}
    cout << pq.top(); // prints 2   


    // size swap empty function same as others

    return 0;
}