#include <bits/stdc++.h>
using namespace std;

// Return an array of numbers from '1' to 'N' using recursion.(This one is returning of array!)

// Defining function
vector<int> printNumberReverse(int n)
{
    if (n == 0)
    {
        vector<int> ans;
        return ans;
    }
    else
    {
        vector<int> ans = printNumberReverse(n - 1);
        ans.push_back(n);
        return ans;
    }
}

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    vector<int> arr = printNumberReverse(n);
    // accessing elements of arr
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *(i) << " ";
    }
    return 0;
}