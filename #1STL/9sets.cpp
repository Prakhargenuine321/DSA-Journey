#include<bits/stdc++.h>
using namespace std;

//SETS-->Just remember that it is "Sorted+Unique(number should not be repeated)".
//The std::set class is the part of C++ Standard Template Library (STL) and it is defined inside the <set> header file.
//Inside it is non-linear in the form of tree.

int main(){
    
    //declaration
    set<int> st;


    //INSERT
    st.insert(1); //{1}
    st.insert(2); //{1 , 2}
    st.insert(2); //{1 , 2} *only unique*
    st.insert(4); //{1 , 2 , 4}
    st.insert(3); //{1 , 2 , 3 , 4} *sorted form*

    // begin, end, rbegin, rend, clear, size, swap, empty are same as previous ones.

    
    //Iterator
    auto it = st.find(3); //It will point to "3" in set.
    auto it1 = st.find(6); //If that element is not present it will point to last element.


    //ERASE
    st.erase(3); //erases "3" takes logarithmic time. //{1 , 2 , 4}


    //Confirming whether number exists in "set" or not
    int cnt = st.count(10); //If it exists it will return "1" else "0" because in set each number is unique so have at max. "1" occurence.
    cout << "======" << cnt << endl;


    //ERASE IN CONSTANT TIME
    set<int> st1 = {1 , 2 , 3 , 5 , 4}; //-->Can also declare like this
    auto it2 = st1.find(2);
    st1.erase(it2);


    //Traversing
    for(auto it : st1){
        cout << it << " ";
    }
    cout << endl;


    //Range Erasing
    auto it3 = st1.find(1);
    auto it4 = st1.find(4);
    st1.erase(it3 , it4); //It will erase as [start , end)

    for(auto it : st1){
        cout << it << " ";
    }
    cout << endl;


    //lower_bound function --> The elements in the range shall already be sorted or at least partitioned with respect to val. 
    //It returns immediate greater value then the Input value.

    set<int> lowerBound = {1 , 2 , 3 , 4 , 5 , 6 , 8};
    auto ite = lowerBound.lower_bound(7); //It returns address.
    cout << *(ite) << endl;

    //Fetching out index --> std::distance function is used to find the index of the iterator returned by lower_bound.
    int index = distance(lowerBound.begin(), ite);
    cout << index << endl;

    // Understand below example to get clarity.
    // Input: 10 20 30 40 50
    // Output: lower_bound for element 30 at index 2

    // Input: 10 20 30 40 50
    // Output: lower_bound for element 35 at index 3

    // Input: 10 20 30 40 50
    // Output: lower_bound for element 55 at index 5 (Basically, 55 is not present, so it returns end() iterator)

    // Input: 10 20 30 30 30 40 50
    // Output: lower_bound for element 30 at index 2


    //upper_bound function --> Finds the iterator pointing to the first element in a sorted range that is greater than a specified value.
    //Here no concept of equality.
    set<int> upperBound = {1 , 2 , 3 , 4 , 5 , 6 , 20};
    auto ite1 = upperBound.upper_bound(7);
    auto ite2 = upperBound.upper_bound(22); //If value is greater than all existing elements than there might be unexpected behaviour. 
    cout << "Upper Bound:" << *(ite1) << endl;
    cout << "Upper Bound:" << *(ite2) << endl;


    
    //Time Complexity: Every operation on a set takes O(1) complexity in the average case and takes O(n) in the worst case.


    //By default, the std::set is sorted in ascending order. However, we have the option to change the sorting order by using the following syntax.
    //set <data_type, greater<data_type>> set_name;
    // set<int , greater<int>> decreaseTh = {1 , 2 , 3 , 4 , 5 , 6};
    // for(auto it : decreaseTh){
    //     cout << it << " ";
    // }

    return 0;
}