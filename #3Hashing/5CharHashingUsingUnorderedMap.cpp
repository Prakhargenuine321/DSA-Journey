#include<bits/stdc++.h>
using namespace std;

//Char-Hashing using map.
//Storing and fetching using "MAP" has TC-->O(1) best case and for worst case O(N) once in a lifetime.
//Always prefer "unordered_map" over "map" ,only if there is an collison{O(N^2)} then move on to "map".
//Collison --> It happens when all the numbers are chained to only one index. (Refer this location--> D:\DSA\Notes Regarding DSA\#9HowCollisonHappens.png )

int main(){

    string str = "prakharpatel";

    unordered_map<char , int> mpp;
    for(auto it : str){
        mpp[it]++;
    }

    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}