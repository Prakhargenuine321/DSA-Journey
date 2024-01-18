#include<bits/stdc++.h>
using namespace std;

//Reverse of an array using 2-pointer recursion
//Problem(link)-->https://www.codingninjas.com/studio/problems/reverse-an-array_8365444


vector<int> reverseArray(int l , int r, vector<int> &nums)
{
    //Method1-->Using 2-pointer recursion.
    if(l>=r){
        return nums;
    }
    else{
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp;
        reverseArray(l+1 ,r-1 , nums);
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
    reverseArray(0 , n-1 , nums);
    for(auto i=0 ; i<n ; i++){  //Method #2 to access elements of an array vector
        cout << nums[i] <<" ";
    }
    return 0;
}