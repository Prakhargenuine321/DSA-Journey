#include<bits/stdc++.h>
using namespace std;

int main(){

    //Reversal of an vector using in-built function
    vector<int> vec = {1 , 2 , 3 , 4 , 5 , 6};
    reverse(vec.begin() , vec.end());
    for(auto it : vec){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}