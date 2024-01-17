#include<bits/stdc++.h>
using namespace std;

int  main(){
    //Print all divisors of an given number 
    //METHOD1-Using normal method.-->commented one is normal method.(but it is not sorted)
    //METHOD2-Using list store and then sort them all.
    int n = 36;
    vector<int> ls;
    for(int i = 1 ; i*i<=n ; i++){
        if(n%i==0){
            // cout << i << "  "; 
            ls.push_back(i);
        if(n/i!=i){
            // cout <<n/i<<"  "; 
            ls.push_back(n/i);
        }
    }
    }
    sort(ls.begin(),ls.end());
    for(auto it :ls )cout << it <<" ";
    return 0;
}