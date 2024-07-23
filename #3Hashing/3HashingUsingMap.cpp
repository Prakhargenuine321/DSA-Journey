#include<bits/stdc++.h>
using namespace std;

//Hashing Using Map-->It will create <key , value> pair where key-->Is Number and value-->Is frequency of number
//Refer following image to understand more --> D:\DSA\Notes Regarding DSA\#5UsingMapforHashing.png

//By using "MAP" we can solve the problem of not able to store more than 10e8 numbers in an array as in "MAP" it will only create "key" for availble numbers.

int main(){

    int n;
    cout << "Enter size of an array!" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    

    //Pre-compute
    map<int , int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    
    //Fetching
    int q;
    cout << "Input number of queries!" << endl;
    cin >> q;
    while(q--){
        cout << "Input number for frequency" << endl;
        int number;
        cin >> number;
        cout << "Frequency of number: " << number << " is: " << mpp[number] << endl;
    }
    return 0;
}