#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {

    //Optimal-->2-pointer solution
    int j = -1;
    for(int i = 0 ; i < nums.size() ; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }

    if(j != -1){
        for(int i = j + 1 ; i < nums.size() ; i++){
            if(nums[i] != 0){
                swap(nums[j] , nums[i]);
                j++;
            }
        }
    }

    //My-Approach-->   
    //TC = O(N^2)
    //SC = O(N) -->extra space used
    // map<int , int> mpp;
    // for(auto it : nums){
    //     mpp[it]++;
    // }
    // int num = mpp[0];
    // int n = nums.size();
    // while(num > 0){
    //     for(int i = 0 ; i < n - 1 ; i++){
    //     if(nums[i] == 0){
    //         swap(nums[i] , nums[i+1]);
    //     }
    // }
    // num--;
    // }


    //Brute-Force -->
    //TC = O(2N)
    //SC = O(N) --> if array has no zero than also it will store whole array that is useless
    // vector<int> temp;
    // int n = nums.size();
    // for(int i = 0 ; i < nums.size() ; i++){
    //     if(nums[i] != 0){
    //         temp.emplace_back(nums[i]);
    //     }
    // }
    // for(int i = 0 ; i < temp.size() ; i++){
    //     nums[i] = temp[i];
    // }
    // int t = temp.size();
    // for(int i = t ; i < n ; i++){
    //     nums[i] = 0;
    // }
    }

int main(){

    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(auto it : nums){
        cout << it << " ";
    }

    return 0;
}