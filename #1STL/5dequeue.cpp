#include<bits/stdc++.h>
using namespace std;

/*DEQue -->a) Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
           b) They are similar to vectors, but are more efficient in case of insertion and deletion of elements. 
*/
int main(){

    //declaration
    deque<int>dq;


    //Inserting an element
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}


    //Popping an element
    dq.pop_back(); // {3, 4, 1}
    dq.pop_front(); // {4, 1}


    //Other functionalities
    cout << dq.back() << endl;
    cout << dq.front() << endl;


    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap

    return 0;
}