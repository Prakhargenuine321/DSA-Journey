#include <iostream>
using namespace std;

int main()
{
    //Butterfly Pattern
    // *         *
    // * *     * *
    // * * * * * *
    // * * * * * *
    // * *     * *
    // *         *
    int num;
    int n;
    cout << "Enter the number of rows required for pattern!"<<endl;
    cin >> num;
    if (num%2==0)
    {
        n = num;
    }
    else{
        n = num+1;
    }
    int mid = (n / 2) - 1;
    for (int row = 0; row < n; row++)
    {
        if (row <= (n / 2) - 1)
        {
            for (int col = 0; col < row + 1; col++)
            {
                cout << "* ";
            }
            for (int col = 0; col < 2 * mid - 2 * row; col++)
            {
                cout << "  ";
            }
            for (int col = 0; col < row + 1; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int col = 0; col < 2 * mid + 2 - row; col++)
            {
                cout << "* ";
            }
            for (int col = 0; col < 2 * row - n; col++)
            {
                cout << "  ";
            }
            for (int col = 0; col < 2 * mid + 2 - row; col++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}