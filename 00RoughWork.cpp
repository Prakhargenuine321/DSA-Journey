#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,4,5,5,6,6,7};
    int size = arr.size();
    for (int i = 0; i < size; i=i+2)
    {
        if(arr[i]!=arr[i+1]){
            cout << arr[i] << " :occured only one time!"<<endl;
            break;
        }
    }
    
    return 0;
}