#include<iostream>
using namespace std;

int main(){
    //This is special pattern #6 (numeric hollow inverted half pyramid);
    // 1 2 3 4 5 6 7 8 9
    // 2             9
    // 3           9
    // 4         9
    // 5       9
    // 6     9
    // 7   9
    // 8 9
    // 9
    int num;
    cout << "Enter the number of rows" << endl;
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num-row; col++)
        {
            if (row == 0)
            {
                cout << col+1 << " ";
            }
            else if (col == 0)
            {
                cout << row+1 <<" ";
            }
            else if(col == num-row-1){
                cout << num << " ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
    
}