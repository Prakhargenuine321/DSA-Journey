#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> arr = {"d","c","b","c","a","b"};

    unordered_map<string , int> mpp;
    for(int i = 0 ; i < arr.size() ; i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}