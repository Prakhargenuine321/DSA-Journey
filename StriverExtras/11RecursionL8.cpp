#include<bits/stdc++.h>
using namespace std;

//Reverse of an array without using recursion
//Problem(link)-->https://www.codingninjas.com/studio/problems/reverse-an-array_8365444

vector<int> reverseArray(int n, vector<int> &nums)
{
    //Method1-->Without using recursion.
    int l = 0;
    int r = n-1;
    int temp;
    while(l<r){
        temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        l++;
        r--;
    }
    return nums;

}


int main(){
    int n ;
    vector<int> nums = {1 , 2 , 3, 4, 5, 6};
    n = nums.size();
    cout << "-----Before Reverse-----"<<endl;
    for(auto i=nums.begin(); i<nums.end(); i++){  //Method #1 to access elements of an array vector
        cout << *(i) <<" ";
    }
    cout << endl;
    cout << "-----After Reverse-----"<<endl;
    reverseArray(n , nums);
    for(auto i=0 ; i<n ; i++){  //Method #2 to access elements of an array vector
        cout << nums[i] <<" ";
    }
    return 0;
}