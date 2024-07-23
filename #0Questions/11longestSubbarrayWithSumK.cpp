#include <bits/stdc++.h>
using namespace std;

// Longest SubArray With Sum K (only +ive arrays)-->

// 1)Brute Force Method-->
//TC = approx. O(N^3) 
//SC = O(1)
void bruteMethod(vector<int> &arr, int n, int num)
{
    int length = -1; // This helps in handling cases where there's no subarray with sum K, in which case length will remain -1 after the loops.
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int sum = 0;
            for (int k = i; k <= j; k++){
                sum = sum + arr[k];
            }
            if (sum == num){
                length = max(length, j - i + 1);
            }
        }
    }
    cout << length << endl;
}


// 1)Brute Force Method-->best possible way of solving brute-force method.
//TC = approx. O(N^2) 
//SC = O(1)
void bruteMethodBetter(vector<int> &arr, int n, int num)
{
    int length = -1; // This helps in handling cases where there's no subarray with sum K, in which case length will remain -1 after the loops.
    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum = sum + arr[j];
            if(sum == num){
                length = max(length , j - i + 1);
            }
        }
    }
    cout << length << endl;
}




//2)Better Method-->If array is containing both +ive and -ive then this is the possible optimal solution.
//Using Hashing
//TC = O(NlogN) for ordered map but we will not use unordered_map as it's complexity in worst case is O(N^2) if collisions occcur so it is better to use ordered map.
//SC = O(N) at worst.
void betterMethod(vector<int> &arr, int n, int num){
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = -1;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum == num){
            maxLen = max(maxLen , i+1);
        }
        long long rem = sum - num;
        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen , len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }
    }
    cout << maxLen << endl;
}


//3)Optimal Approach -->Only for array containing +ive and zero's.
//TC = O(2N)
//SC = O(1)
void optimalMethod(vector<int> &arr , int n , int num){
    int left = 0;
    int right = 0;
    int maxLen = -1;
    int sum = arr[0];
    while(right < n){
        while(left <= right && sum > num){
            sum -= arr[left];
            left++;
        }
        if(sum == num){
            maxLen = max(maxLen , right - left + 1);
        }
        right++;
        if(right < n){
            sum += arr[right];
        }
    }
    cout << maxLen << endl;
}

int main()
{

    vector<int> arr = {10, 5, 2, 7, 1, 9};
    bruteMethod(arr, arr.size(), 10);
    bruteMethodBetter(arr, arr.size(), 9);
    betterMethod(arr, arr.size() , 15);
    optimalMethod(arr, arr.size() , 17);
    return 0;
}