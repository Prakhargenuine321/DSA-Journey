#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {2 ,3 , 1 , 5 , 6};
    sort(arr.begin() , arr.end());
    reverse(arr.begin() , arr.end());
    for(auto it : arr){
        cout << it << " ";
    }


    return 0;
}