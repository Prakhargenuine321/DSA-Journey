#include<iostream>
using namespace std;

int main(){
    //This is special pattern #2
    // **** ****
    // ***   ***
    // **     **
    // *       *
    // *       *
    // **     **
    // ***   ***
    // **** ****
    int num;
    cout << "Enter the rows of pattern required!"<<endl;
    cin >> num;
    int n = num/2;
    for (int row = 0; row < n; row++)
    {
        //half inverted pyramid
        for (int col = 0; col < n-row; col++)
        {
            cout << "*";
        }
        //full pyramid
        for (int col = 0; col < 2*row+1; col++)
        {
            cout << " ";
        }
        //half inverted pyramid
        for (int col = 0; col < n-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        //half inverted pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        //full pyramid
        for (int col = 0; col < 2*n-2*row-1; col++)
        {
            cout << " ";
        }
        //half inverted pyramid
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}