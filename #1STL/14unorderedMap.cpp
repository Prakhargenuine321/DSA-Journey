#include<bits/stdc++.h>
using namespace std;

//Unordered Map--> Same as map but not stored in sorted form.

int main(){

    //declaration
    unordered_map<int , int> mpp;


    //INSERT
    mpp.insert({1 , 2});
    mpp.emplace(3 , 1);
    mpp.emplace(2 , 4);


    //Traversal
    //#Method 1
    for(const auto &it : mpp){
        cout << it.first << "-> " << it.second << endl;
    }
    //#Method 2
    for(auto it = mpp.begin() ; it != mpp.end() ; it++){
        cout << it->first <<  "-> " << it->second << endl;
    }


    //Time Complexiy: Average:O(1) and Worst:O(n)

    return 0;
}