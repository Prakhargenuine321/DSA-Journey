#include<bits/stdc++.h>
using namespace std;

//Char-Hashing using map.
//Storing and fetching using "MAP" has TC-->log(N) for all cases.

int main(){

    string str = "prakharpatel";

    map<char , int> mpp;
    for(auto it : str){
        mpp[it]++;
    }

    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}