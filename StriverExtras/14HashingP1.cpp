#include<bits/stdc++.h>
using namespace std;

//Hashing-->Pre-stored and fetching(when required)
//Here I am programming to count frequencies of a number in an array.

int main(){
    //number of elements in an array
    int n;
    int num;
    int max;
    cout << "Enter number of elements in an array!"<<endl;
    cin >> n;
    cout << "Enter biggest number you will Input in array to define the limit!"<<endl;
    cin >> max;
    vector<int> arr;
    cout << "Enter elements in an array!"<<endl;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        arr.push_back(num);
    } 

    //Frquencies of number using Hashing or say pre-storing
    vector<int> hash_arr(max);
    for (int i = 0; i < n; i++)
    {
        hash_arr[arr[i]] +=1;
    }
    
    //Now fetching
    int q;
    cout << "For how much numbers you need the frequency!"<<endl;
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter number: "<<endl;
        cin >> number;
        cout << "Frequency of number: "<<number<<" is: "<<hash_arr[number]<<endl;
    }
    

    return 0;
}