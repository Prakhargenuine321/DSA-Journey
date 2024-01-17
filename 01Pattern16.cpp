#include<iostream>
using namespace std;

int main(){
    //This is special pattern 
    // 1 2 3 4 5 5 4 3 2 1 
    // 1 2 3 4 * * 4 3 2 1
    // 1 2 3 * * * * 3 2 1
    // 1 2 * * * * * * 2 1
    // 1 * * * * * * * * 1 
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        int num = n - row;
        //Printing the numbers in inverted pyramid form
        for (int col = 0; col < n-row; col++)
        {
            cout << col+1<< " ";
        }
        //Printing star in-place of spaces
        for (int col = 0; col < 2*row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout << num << " " ;
            num--;
        }
        
        cout << endl;
    }
    
    return 0;
}