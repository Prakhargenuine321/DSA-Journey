#include<bits/stdc++.h>
using namespace std;

void recBubble(vector<int> &arr , int index , int n){
    if(index < n){
        int i = 0;
        while(i <= n - index - 2){
            if(arr[i] > arr[i+1]){
                swap(arr[i] , arr[i+1]);
            }
            i++;
        }
    index++;
    recBubble(arr , index , n);
    }
}

int main(){

    vector<int> arr = {20 , 12 , 14 , 2 , 7};
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    recBubble(arr , 0 , arr.size()); 

    for(auto it : arr){
        cout << it << " ";
    }

    return 0;
}