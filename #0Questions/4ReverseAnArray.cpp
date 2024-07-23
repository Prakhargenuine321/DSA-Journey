#include <bits/stdc++.h>
using namespace std;

// Problem-->
//  Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

// My first try
//  int index = 0;
//  while(index <= s.size()/2){
//      char temp = s[index];
//      s[index] = s[s.size() - index - 1];
//      s[s.size() - index - 1] = temp;
//  }

// Method 2
// reverse(s.begin(), s.end());

// Method 3 (One of the best solution of leetcode)
//  void reverseString(vector<char>& s) {
//  int low = 0;
//  while (low<(s.size())/2){
//      swap(s[low],s[s.size()-low-1]);
//      low++;
//  }

string reverseStr(string &str){ //Always pass as with an address to change it.
    int index = 0; //using only one pointer
    while(index <= str.size()/2){
        swap(str[index] , str[str.size() - index - 1]); //using in-built swapping function
        index++;
    }
    return str;
}

int main()
{

    // Using recursion
    string str = "madsm";
    cout << "Reversing this string using RECURSION"<< endl;
    reverseStr(str);
    for(auto it : str){
        cout << it << " ";
    }
    return 0;
}


//We can also solve "Check Palindrome" using this analogy
//Check till (size/2) if "index" and "size - index - 1" are equal if at any place they are not equal return "FALSE" else "TRUE".

// #include <iostream>
// #include <string>
// using namespace std;

// bool palindrome(string &str , int index){
//     if(index >= str.size()/2){
//         return true;
//     }
//     if(str[index] != str[str.size() - index - 1]){
//         return false;
//     }
//     palindrome(str , index+1);
// }

// int main()
// {
//     string str = "madam";
//     bool check = palindrome(str , 0);
//     if(check == true){
//         cout << "It is an palindrome" << endl;
//     }
//     else{
//         cout << "It is not an palindrome" << endl;
//     }
//     return 0;
// }