#include<bits/stdc++.h>
using namespace std;


int main(){

    map<int, int> mpp;

    vector<int> arr = {1, 2, 3, 4, 5, 5, 6, 6, 6};

    for(int i = 0 ; i < arr.size() ; i++){
        mpp[arr[i]]++;
    }

    for(int i = 0 ; i < mpp.size() ; i++){
        if(mpp[i] > 1){
            cout << mpp[i]<<" ";
        }
    }

    return 0;
}