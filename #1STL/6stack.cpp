#include<bits/stdc++.h>
using namespace std;

//Stack -->a)No indexing or index access is allowed. b)Having TimeComplexity: O(1) for all functionalities(operations).

int main(){


    //declaration
    stack<int> st;


    //Insertion
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(3); // {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}


    //TOP element access
    cout <<st.top(); // prints 5 "** st [2] is invalid **"
    cout << endl;


    //Popping the element
    st.pop(); // st looks like {3, 3, 2, 1}
    cout << st.top(); // 3
    cout << endl;


    //Size
    cout << st.size(); // 4
    cout << endl;


    //Empty or not
    cout << st.empty() << endl;
    cout << endl;


    //Swapping of two stacks
    stack<int> st1;
    st1.push(10);
    st1.push(20);
    stack<int> st2;
    st2.push(30);
    st2.push(40);

    st1.swap(st2);


    //Accessing array elements
    while (!st1.empty()) {
        cout << st1.top() << " ";
        st1.pop();
    }


    return 0;
}