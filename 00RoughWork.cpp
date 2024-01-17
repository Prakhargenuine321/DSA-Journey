#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);
    auto pos = st.find(3);
    for (auto i = pos; i != st.end(); i++)
    {
        cout << *i <<" ";
    }
    
    
}