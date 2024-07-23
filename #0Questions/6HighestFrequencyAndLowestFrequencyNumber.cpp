#include<bits/stdc++.h>
using namespace std;


// Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

// Pre-requisite: Hashing Theory and  Counting frequencies of array elements

// Examples:

// Example 1:
// Input: array[] = {10,5,10,15,10,5};
// Output: 10 15
// Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

// Example 2:

// Input: array[] = {2,2,3,4,4,2};
// Output: 2 3
// Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.

int main(){

    // int arr[] = {10,5,10,15,10,5};
    int arr[] = {2,2,3,4,4,2};

    unordered_map<int , int> mpp;

    for(auto it : arr){
        mpp[it]++;
    }


    //iterator-->
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int maxFrequency = 0;
    int minFrequency;
    int min;
    int max;
    for(auto it : mpp){
        if(it.second >= maxFrequency){
            maxFrequency = it.second;
            max = it.first;
        } 
    }

    minFrequency = maxFrequency;
    for(auto it : mpp){
        if(it.second < minFrequency){
            minFrequency = it.second;
            min = it.first;
        }
    }

    cout << "Number: " << min << "->" << minFrequency << endl;
    cout << "Number: " << max << "->" << maxFrequency << endl;
    return 0;
}



//One more question based on this concept

// Count Elements With Maximum Frequency

// You are given an array nums consisting of positive integers.

// Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

// The frequency of an element is the number of occurrences of that element in the array.

 

// Example 1:

// Input: nums = [1,2,2,3,1,4]
// Output: 4
// Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
// So the number of elements in the array with maximum frequency is 4.


//Solution-->
//  int maxFrequencyElements(vector<int>& nums) {
//         unordered_map<int , int> mpp;
//         for(auto it : nums){
//             mpp[it]++;
//         }

//         int max = 0;
//         int count = 0;

//         for(auto it : mpp){
//             if(it.second >= max){
//                 max = it.second;
//             }
//         }

//         for(auto it : mpp){
//             if(it.second == max){
//                 count++;
//             }
//         }
//         return count*max;
//     }