#include<iostream>
using namespace std;

int main(){
    //This is mine way of doing this pattern
    //       1 
    //     2 1 2
    //   3 2 1 2 3
    // 4 3 2 1 2 3 4
    int n = 4;
    for (int row = 0; row < n; row++)
    {
        int num = row + 1, num1 =2;
        //for spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }
        //for numbers
        for (int col = 0; col < row+1; col++)
        {
            cout << num <<" ";
            num--;
        }
        for (int col = 0; col < row; col++)
        {
            cout << num1 << " ";
            num1++;
        }
        
        
        cout << endl;
    }
    
    return 0;
}