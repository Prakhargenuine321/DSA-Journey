#include<bits/stdc++.h>
using namespace std;

//Jab hum Numbers ki frequency calculate karte hain using array tab jo numbers nahi hote hain unke liye bhi memory allocate ho jati hai aur memory wastage hota hai isliye ab hum "map" use karaeingae 

//"map-datastructure"-->it will map "value" corresponding to "key" and it will store "key-value" pair in sorted manner.
//And according to the range of numbers hum different data-type use kar sakte hain as, (long long) , (long) etc.

int main(){
    int n;
    int num;
    cout << "Enter the size of an array!"<<endl;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr.emplace_back(num);
    }
    
    //declaring map and pre-storing
    map<int , int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries!"<<endl;
    cin >> q;

    //Fetching
    while (q--)
    {
        int number;
        cout << "Enter the number whose frequency you want!"<<endl;
        cin >> number;
        cout << "Frequency of number: "<<number<<" is: "<<mpp[number]<<endl;
    }
    
    //Doing "iteration" over map to prove that it store in a sorted manner
    cout << "Here you will get key-value pairs of an map!"<<endl;
    for(auto it : mpp){
        cout << it.first << "->" << it.second<<endl;
    }
    cout << "--------Dekho hai na sorted form maein!--------"<<endl;
    
    
    return 0;
}