#include<bits/stdc++.h>
using namespace std;

int main(){

    string w1 = "abcabc";
    string w2 = "abc";
    vector<char> chars(w2.begin(), w2.end());
    int count = 1;

    while(next_permutation(chars.begin(), chars.end())){
        count++;
    }
    cout << count;

    return 0;
}