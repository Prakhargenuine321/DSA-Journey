#include<bits/stdc++.h>
using namespace std;

//Queue -->Elements are inserted at the back (end) and are deleted from the front.(as, Ticket counter line)

int main(){


    //declaration
    queue<int> q;


    //Insertion
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}


    //Updating an element
    q.back() += 5; //{1, 2, 9}


    //Accessing an element
    cout << q.back(); // prints 9

    cout << q.front(); // prints 1
    
    q.pop(); // {2, 9}

    cout << q.front() << endl; // prints 2

    cout << q.empty();


    // size swap empty same as stack
    return 0;
}