#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> &arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    // brute-force solution-->
    vector<int> arr = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int longest = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 1;
        int x = arr[i];
        while (linearSearch(arr, x + 1) == true)
        {
            count++;
            x++;
        }
        longest = max(longest, count);
    }
    cout << longest << endl;

    return 0;
}

// better solution-->
//  if(nums.size() == 0) return 0;
//  sort(nums.begin() , nums.end());
//  int longest = 1;
//  int lastSmall = INT_MIN;
//  int count = 0;
//  for(int i = 0 ; i < nums.size() ; i++){
//      if(nums[i] - 1 == lastSmall){
//          lastSmall = nums[i];
//          count++;

//     }else if(nums[i] != lastSmall){
//         lastSmall = nums[i];
//         count = 1;
//     }
//     longest = max(count , longest);
// }
// return longest;