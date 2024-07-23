#include<bits/stdc++.h>
using namespace std;

//Intersection of two arrays (repetition is allowed)
//as,
//arr1 = {1 , 2 , 2 , 3 , 3 , 4 , 5 , 6};
//arr2 = {2 , 3 , 3 , 5 , 6 , 6 , 7};
//interArr = {2 , 3 , 3 , 5 , 6};

vector<int> intersectionArray(vector<int> &arr1 , vector<int> &arr2 , int n , int m){ //this is optimal solution will work perfectly for sorted array but not for unsorted array.
//TC -->O(n + m)
//SC -->O(1)
    int i = 0;
    int j = 0;
    vector<int> ans;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] == arr2[j]){
            ans.emplace_back(arr1[i]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){

    vector<int> arr1 = {1 , 2 , 2 , 3 , 3 , 4 , 5 , 5 , 6 , 6};
    vector<int> arr2 = {2 , 3 , 3 , 5 , 5 , 6 , 6 , 7};
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans;
    ans = intersectionArray(arr1 , arr2 , n , m);
    for(auto it : ans){
        cout << it << " ";
    }

    return 0;
}