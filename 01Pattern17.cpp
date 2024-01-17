#include<iostream>
using namespace std;

int main(){
    //Numeric Hollow Pyramid
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row +1 ; col++)
        {
            if (col == row)
            {
                cout << col+1 << " ";
            }
            else{
                cout << "  "; 
            }
        }
        if (row == n-1)
        {
            for (int col = 0; col < n-1; col++)
            {
                cout << col+1<<" ";
            }
            
        }
        
        cout << endl;
        
    }
    
    return 0;
}