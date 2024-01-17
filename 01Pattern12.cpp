#include <iostream>
using namespace std;

int main()
{
    // for solid half diamond
    // *
    // **
    // ***
    // ****
    // *****
    // ******
    // *****
    // ****
    // ***
    // **
    // *
    int num;
    int n;
    cout << "Enter the number of rows in pattern!"<<endl;
    cin >> num;
    if (num%2==0)
    {
        n = num+1;
    }
    else{
        n = num;
    }
    for (int i = 0; i < n; i++)
    {
        if (i <= n / 2)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}