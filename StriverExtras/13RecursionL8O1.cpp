#include<bits/stdc++.h>
using namespace std;

//Reverse of an array using 1-pointer recursion
//Problem(link)-->https://www.codingninjas.com/studio/problems/reverse-an-array_8365444


vector<int> reverseArray(int i , vector<int> &nums)
{
    //Method1-->Using 1-pointer recursion.
    int n = nums.size();
    if(i>=n/2){
        return nums;
    }
    else{
        int temp = nums[i];
        nums[i] = nums[n-i-1];
        nums[n-i-1] = temp;
        reverseArray(i+1 ,nums);
    }

}


int main(){
    int n ;
    vector<int> nums = {1 , 2 , 3, 4, 5, 6, 10 , 12};
    n = nums.size();
    cout << "-----Before Reverse-----"<<endl;
    for(auto i=nums.begin(); i<nums.end(); i++){  //Method #1 to access elements of an array vector
        cout << *(i) <<" ";
    }
    cout << endl;
    cout << "-----After Reverse-----"<<endl;
    reverseArray(0 , nums);
    for(auto i=0 ; i<n ; i++){  //Method #2 to access elements of an array vector
        cout << nums[i] <<" ";
    }
    return 0;
}