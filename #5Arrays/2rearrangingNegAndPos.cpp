#include<bits/stdc++.h>
using namespace std;


void rearrange(vector<int> &arr, int n) { //passing 'array' with reference to maintain change in original array.
	    // code here
	    //seperating negative and positive numbers
	    vector<int> posArr;
	    vector<int> negArr;
	    for(int i = 0 ; i < n ; i++){
	        if(arr[i] < 0){
	            negArr.emplace_back(arr[i]);
	        }
	        else{
	            posArr.emplace_back(arr[i]);
	        }
	    }
	    
	    int pos = posArr.size();
	    int neg = negArr.size();
	    
	    //now sorting
	    if(pos >= neg){
	        for(int i = 0 ; i < neg ; i++){
	            arr[2*i] = posArr[i];
	            arr[2*i + 1] = negArr[i];
	        }
	        int index = 2 * neg;
	        for(int i = neg ; i < pos ; i++){
	            arr[index] = posArr[i];
	            index++;
	        }
	    }
	    else{
	        for(int i = 0 ; i < pos ; i++){
	            arr[2*i] = posArr[i];
	            arr[2*i + 1] = negArr[i];
	        }
	        int index = 2 * pos;
	        for(int i = pos ; i < neg ; i++){
	            arr[index] = negArr[i];
	            index++;
	        }
	    }
	}


int main(){
    
    vector<int> arr = {9, 4, -2, -1, 5, 0, -5, -3, 2 , 3 , 4 , -10};
    int n = arr.size();

    cout << "Before Rearranging!" << endl;
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    rearrange(arr , n);

    cout << "After Rearranging!" << endl; 
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}