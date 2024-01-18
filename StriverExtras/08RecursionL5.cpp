#include<bits/stdc++.h>
using namespace std;

//Return value from '1' to 'N' using recursion.(This is best method in terms of Time Complexity!)

//Defining Function
vector<int> recu(int x , int i){
    if(i>x){
        vector<int> ans;
        return ans;
    }
    else{
        vector<int> ans = recu(x,i+1);
        ans.push_back(i);
        return ans;
    }
}

vector<int> printNos(int x){
    vector<int> res = recu(x , 1);
    return res;
}



int main(){
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    vector<int> arr = printNos(n);
    // accessing elements of arr
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *(i) << " ";
    }
    return 0;
}