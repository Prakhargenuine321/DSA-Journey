#include<iostream>
using namespace std;

//Algorithm-->
//1)Select the minimum between i and n-2(because at the n-1 will be already sorted).
//2)Swap the "i" index element with element at "min" index.
//3)Refer this for clear understanding--> (D:\DSA\Notes Regarding DSA\#10SelectionSort(Analogy).png)
//4)Time Complexity -->O(N^2) (avg. , worst , best), refer for understanding-->(D:\DSA\Notes Regarding DSA\#11SelectionSort(TimeComplexity).png)

int main(){

    int arr[] = {20 , 12 , 14 , 2 , 7 , 11 , 11 , 11};
    int minIndex;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size << endl;

    for(int i = 0 ; i <= size - 2 ; i++){
        minIndex = i;
        for(int j = i ; j <= size - 1 ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i] , arr[minIndex]);
    }

    for(auto it : arr){
        cout << it << " ";
    }
    return 0;
}