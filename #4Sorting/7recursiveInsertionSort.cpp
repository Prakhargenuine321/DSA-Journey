#include<bits/stdc++.h>
using namespace std;

void recInsertion(vector<int> &arr , int n , int index){
    if(index < n){
        int i = index;
        while(i > 0 && arr[i-1] > arr[i]){
            swap(arr[i-1] , arr[i]);
            i--;
        }
        index++;
        recInsertion(arr , n , index);
    }
}

int main(){

    vector<int> arr = {23 , 12 , 4 , 5 , 20};
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    recInsertion(arr , arr.size() , 0);

    for(auto it : arr){
        cout << it << " ";
    }

    return 0;
}