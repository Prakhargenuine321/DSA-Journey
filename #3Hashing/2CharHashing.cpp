#include<iostream>
#include<string>
using namespace std;

//Char-hashing -->It is easy and we don't have to think a lot about size as at max there are 256 characters so always use "ARRAYS" for "Char-hashing".

int main(){

    string str = "abcdeffedc"; 
    
    int charHash[26] = {0}; //26 size as there are only 26 small-alphabets
    
    //Pre-storing
    for (int i = 0; i < str.size(); i++)
    {
        charHash[str[i] - 'a']++; //suppose for 'a' it will be as (97 - 97) = 0 so increment at index "0".
    }
    
    //Fetching
    cout << "Input number of queries" << endl;
    int q;
    cin >> q;
    while(q--){
        char c;
        cout << "Input char to get it's frequency"<<endl;
        cin >> c;
        cout << "Frequency of character: " << c << " is: "<<charHash[c - 'a'] << endl;
    }
    
    //few important points--
    //if want to know frequency of any character than you can declare size of an array to "256" and convert "c - 'a'" to just "c".
    return 0;
}