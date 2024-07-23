#include<bits/stdc++.h>
using namespace std;

//MAP -->It stores in sorted order and always unique keys allowed.
//It is in [key , value] pair.

int main(){


    //declaration
    map<int , int> mpp;
    //map<int , pair<int , int>> mpp;
    //map<pair<int , int> , int> mpp;
    //mpp[{2,3}] = 10; -->this is for above declaration.
    //In map "key" can be of any datatype.


    //Mapping an element
    mpp[1] = 2;
    mpp.emplace(3 , 4);
    mpp.insert({2 , 5});


    //Traversing
    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }


    //Accessing elements
    cout << mpp[1] << endl;
    cout << mpp[2] << endl;


    //accessing address -->accessing key that doesn't exist will give unknown behaviour but here in myPC it is "1" as an result.
    auto it = mpp.find(1);
    cout << "Accessing through address: " <<it->second << endl;
    auto it1 = mpp.find(10);
    cout << "Accessing through address: " <<it1->second << endl;


    //lower_bound and upper_bound
    auto it2 = mpp.lower_bound(2);
    cout << "Lower Bound: "<< it2->second << endl;
    auto it3 = mpp.upper_bound(2);
    cout << "Upper Bound: "<< it3->second << endl;


    // erase, swap, size, empty, are same as above

    //Time Complexiy: O(logN)

    return 0;
}