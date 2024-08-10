//following is problem link-->
//https://www.naukri.com/code360/problems/number-of-inversions_6840276?leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
using namespace std;

int mergeSorted(vector<int> &arr ,int low ,int mid , int high){

    vector<int> temp;  //to store an sorted portion
    int left = low;
    int right = mid + 1;
    int count = 0;

    while(left <= mid && right <= high){
        //left is smaller
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{ //right is smaller
            temp.push_back(arr[right]);
            count += (mid - left + 1);
            right++;
        }
    }

    while(left <= mid){ //it means there is still elements at left side
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){ //it means there is still elements at right side
        temp.push_back(arr[right]);
        right++;
    }

    //updating the original array in sorted version although it is not needed in this question
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i - low];
    }

    return count;
}


//this function continuously divides array until
//low >= high
int divideArray(vector<int> &arr ,int low ,int high){

    int count = 0; //this count will sum-up all the counts for each function call

    //base condition
    if(low >= high) return count;

    //finding mid of an array to seperate it in two halves
    int mid = (low + high) / 2;
    count += divideArray(arr , low , mid); //left halves of an array
    count += divideArray(arr , mid + 1 , high); //right halves of an array

    //after dividing array into two halves we need to merge it by merging
    count += mergeSorted(arr , low , mid , high);
    return count;
}

int main(){

    vector<int> arr = {5, 3, 2, 1, 4};
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    
    int ans = divideArray(arr , low , high);
    cout << "Number of Inversions are: " << ans << endl;

    return 0;
}