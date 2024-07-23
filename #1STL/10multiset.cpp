#include<bits/stdc++.h>
using namespace std;

//MultiSet -->Same as set the only difference is that it can also store duplicate values.

int main(){


    //declaration
    multiset<int> ms;


    //INSERT
    ms.insert(1); //{1}
    ms.insert(1); //{1 , 1}
    ms.insert(1); //{1 , 1 , 1}
    for(auto it : ms){
        cout << it << " ";
    }
    cout << endl;


    //Counting the number of occurences
    cout << ms.count(1) << endl;


    //ERASE(This will erase all the occurences of the given element)
    ms.erase(1);
    for(auto it : ms){
        cout << it << " ";
    } 
    cout << endl;


    //ERASE(Only selective elements are deleted)
    cout << "ERASE(Only selective elements are deleted)" << endl;
    multiset<int> ms1 = {1 , 1 , 1 , 2 , 3 , 4 , 5 , 5};

    ms1.erase(ms1.find(1));
    auto range = ms1.equal_range(1); // Get a range of iterators pointing to all occurrences of 1
    ms1.erase(range.first, next(range.first, 2)); // Remove two occurrences of 1

    cout << ms1.size() << endl; //size

    for(auto it : ms1){
        cout << it <<" ";
    }
    cout << endl;


    //Range deleting
    cout << "RANGE DELETING" << endl; 
    multiset<int> ms2 = {1 , 1 , 1 , 2 , 3 , 4 , 5 , 5};

    ms2.erase(ms2.find(3) , ms2.end());
    for(auto it : ms2){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}