#include<bits/stdc++.h>
using namespace std;

//Merge Sort -->Divide and merge the two sorted-halves of an array.
//TC -->mergeSort-function is taking O(logbase2N) and merge-function at worst will take O(N) so overall TC is: O(NlogN).
//SC -->Not using as such any additional space but in merge-function using extra temp-array so at worst it will be: O(N).

void merge(vector<int> &arr , int low , int mid , int high){

    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    
    //if one of the portion is already sorted but still one portion is left then add it as it is
    while(left <=mid){
        temp.emplace_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.emplace_back(arr[right]);
        right++;
    }

    //now copying 'temp' array in original 'arr'
    for(int i = low ; i <=high ;i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr , int low , int high){

    //base case
    if(low >=high) return;

    //finding 'mid' of an array
    int mid = (low + high) / 2 ;

    //divide the array into two-halves until there will be no-seperations possible.
    mergeSort(arr , low , mid);
    mergeSort(arr , mid+1 , high);

    //merging two-halves of an array
    merge(arr , low , mid , high);

}

int main(){

    vector<int> arr = {1 , 2 , 46 , 32 , 14 , 5};

    for(auto it : arr){
        cout << it << " ";
    }

    cout << endl;

    int low = 0;
    int high = arr.size() - 1;
    mergeSort(arr , low , high);

    for(auto it : arr){
        cout << it << " ";
    }

    return 0;
}