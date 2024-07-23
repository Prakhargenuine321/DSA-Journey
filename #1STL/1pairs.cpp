#include<bits/stdc++.h>
using namespace std;

//Pairs --> They are inside "<utility>" header file and "container" class in STL.

int main(){
    pair<int , int> p = {1 , 2};
    cout << p.first << " " << p.second << endl;

    pair<int , pair<int , int>> pMulti = {1 , {2 , 3}};
    cout << pMulti.first << " " << pMulti.second.first << " " << pMulti.second.second << endl;

    //Using pairs as an datatype to create it's array
    pair<int , int> arr[] = {{1 , 3} , {2 , 4} , {5 , 7}};
    cout << arr[0].first << " " << arr[1].second << endl;
    return 0;
}