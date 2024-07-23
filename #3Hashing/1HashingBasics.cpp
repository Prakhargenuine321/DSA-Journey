#include<bits/stdc++.h>
using namespace std;

//Hashing -->Pre-storing and fetching when required there might also be given "At-Max No." the highest number of an array.
 
int main(){

    int n; //Size of an input array
    cout << "Input the size of an array!" << endl;
    cin >> n; 
    int arr[n]; //Input array declaration
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //following method is used to find out maximum element of an array
    int maxNum = *max_element(arr , arr + n);
    cout << "Maximum element: " << maxNum << endl;
    
    int hashArr[maxNum+1] = {0}; //declaring hash array
    for (int i = 0; i <= maxNum; i++) //pre-stroing frequency of each element in array
    {
        hashArr[arr[i]] += 1;
    }
    
    //fetching portion
    int q;
    cout << "Enter number of queries!" <<endl;
    cin >> q;
    while(q--){
        cout << "Input number whose frequency you required!" << endl;
        int num;
        cin >> num; //-->If you input "num" more than the maxNum then it will give some random value.
        cout << "Frequency of element: " << num << " is:" << hashArr[num] << endl;
    }


    //Few important points to be remember
    //Global declaration --> for int ->10e7 for bool ->10e8 (every thing is initialized as zero)
    //Inside Main declaration --> for int ->10e6 for bool ->10e7 
    //If we declare array size greater than above mentioned then it will give "Segmentation Fault"
    return 0;
}