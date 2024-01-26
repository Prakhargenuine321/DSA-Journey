#include<bits/stdc++.h>
using namespace std;

//Character Hashing-->Calculating ferquency of an character in an given string.
//Declaring array for char array is most suitable approach and gives better time complexity because characters are limited i.e. 256.

int main(){
    //declaration and taking string as an input
    string str;
    cout << "Enter your string!"<<endl;
    cin >> str;
    int str_size = str.length();
    
    //Here size of an array is 26 because only working over either lowercase or uppercase
    vector<int> freq(26);
    //We will give array size 256 if there is no boundation of character(Uncomment to use it-->)
    //vector<int> freq(256);
    for (int i = 0; i < str_size; i++)
    {
        freq[str[i]-'a'] +=1;
        //for 256 characters
        // freq[str[i]] +=1;
    }

    //Fetching 
    int q;
    cout << "How many times you want to perform searching!"<<endl;
    cin >> q;
    while (q--)
    {
        char ch;
        cout << "Enter the character for whom you require frequency!"<<endl;
        cin >> ch;
        cout << "Frequency of character: "<<ch<<" is: "<<freq[ch-'a']<<endl;
        //for 256 characters
        // cout << "Frequency of character: "<<ch<<" is: "<<freq[ch]<<endl;
    }
    
    

    return 0;
}