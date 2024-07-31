#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    sort(arr.begin() , arr.end());
    for(auto it : arr){
        cout << it << " ";
    }


    return 0;
}