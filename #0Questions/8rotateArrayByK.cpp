#include <bits/stdc++.h>
using namespace std;

//Better -->
//TC -->O(N)
// my approach
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    vector<int> temp;
    for (int i = n - k; i < n; i++)
    {
        temp.emplace_back(nums[i]);
    }

    for (int i = n - 1; i >= k; i--)
    {
        nums[i] = nums[i - k];
    }

    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
}


//Optimal -->
//TC -->O(2N)
//SC -->O(1)
//what i learned -->This is an faster wauy I learned from leetcode.
void rotateFaster(vector<int> &nums, int k){
    k = k % nums.size();
    reverse(nums.begin() , nums.end());
    reverse(nums.begin() , nums.begin() + k);
    reverse(nums.begin() + k , nums.end());
}


//Brute force -->
//It will exceed time-limit

// int n = nums.size();
//  k= k % n; //because after rotations equal to number of elements of array it will come to it's original state 
//         while(k > 0){
//             int temp = nums[n-1];
//             for(int i = n - 1; i > 0 ; i--){
//                 nums[i] = nums[i-1];
//             }
//             nums[0] = temp;
//             k--;
//         }

int main()
{
    int k = 3;
    vector<int> nums = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    for(auto it : nums){
        cout << it << " ";
    }
    cout << endl;
    rotateFaster(nums , k);
    for(auto it : nums){
        cout << it << " ";
    }

    return 0;
}