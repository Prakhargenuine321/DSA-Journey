//Binary Search -->It is implemented over sorted form of data.

//iterative approach is done over leetcode -->https://leetcode.com/problems/binary-search/

//here did 'recursive-approach'

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums , int low , int high , int target){
    if(low > high){
        return -1;
    }
    int mid = (low + high) / 2;
    if(nums[mid] == target){
        return mid;
    }else if(nums[mid] < target){
        low = mid + 1;
        binarySearch(nums , low , high , target);
    }
    else{
        high = mid - 1;
        binarySearch(nums , low , high , target);
    }
}

int main(){

    vector<int> nums = {1 , 2 , 3 , 4 , 5 , 6};
    int n = nums.size();
    int target = 10;
    int ans = binarySearch(nums , 0 , n - 1 , target);
    cout << "Index of target: " << target << " is: " << ans << endl;
    return 0;
}
