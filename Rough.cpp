#include<bits/stdc++.h>
using namespace std;

void prime(vector<int>& num){

    for(int i = 0 ; i < num.size() ; i++){
        num[i] = num[i] * 2;
    }
}


int main(){

    vector<int> num = {1 , 2 , 3 , 4 , 5};

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    prime(num);

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }


    return 0;
}