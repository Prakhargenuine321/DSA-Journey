//Binary Search -->It is implemented over sorted form of data.

//iterative approach is done over leetcode -->https://leetcode.com/problems/binary-search/

//here did 'recursive-approach'
//TC =>O(logbase2N);

//Overflow Case-->
//suppose if our "answer" is INT_MAX and range is "0 to INT_MAX" so if we did
//mid = (high + low) / 2 --> it will overflow as {INT_MAX + INT_MAX = 2 * INT_MAX} so variable will not be able to store it
//so there are following 2 solutions for this problem-->
//1)take low and high as "long long"
//2)mid = low + (low - high) / 2;

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
