#include<iostream>
using namespace std;

//Insertion Sort -->Take element and place it in it's correct order.
//For illustration understanding refer this --> D:\DSA\Notes Regarding DSA\#12InsertionSort.png
//TC --> (avg. and worst)->O(N^2) and (best)->O(N)(If array is already sorted.)

int main(){

    int arr[] = {23 , 12 , 4 , 5 , 20};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i <= n-1 ; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            swap(arr[j-1] , arr[j]);
            j--;
        }
    }

    for(auto it : arr){
        cout << it << " ";
    }

    return 0;;
}