#include<bits/stdc++.h>
using namespace std;

//Quick Sort--> It has TC similar to 'merge sort'(O(NlogN)) but doesn't take any extra space so SC is O(1).
//It is an divide and conquer algorithm.

int partition(vector<int> &arr  , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i < j){
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[j] , arr[low]);
    return j;
}

void quickSort(vector<int> &arr , int low , int high){
    if(low < high){ //condition to check if there are more then 1 element
        int pIndex = partition(arr , low , high);
        quickSort(arr , low , pIndex - 1); //for sorting left-halve
        quickSort(arr , pIndex + 1 , high); //for sorting right-halve
    }
}



int main(){
    vector<int> arr = {2 , 13 , 4 , 12 , 1 , 0 , 13};
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    quickSort(arr , 0 , arr.size()-1);
    for(auto it : arr){
        cout << it << " ";
    }
    
    return 0;
}


//for getting in descending order you just need to do following minor change-->
// while(i < j){
//         while(arr[i] >= pivot && i <= high - 1){ //here is change in in-equality
//             i++;
//         }
//         while(arr[j] < pivot && j >= low + 1){ //here is change in in-equality
//             j--;
//         }
//         if(i < j){
//             swap(arr[i] , arr[j]);
//         }
//     }
//}