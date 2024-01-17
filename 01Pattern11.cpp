#include<iostream>
using namespace std;

int main(){
    //This is special pattern #7 (numeric palindrome equilateral pyramid);
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1
    int num;
    cout << "Enter the number of rows in an pattern!"<<endl;
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        int n_last_digit;
        for (int col = 0; col < num - row -1; col++)
        {
            cout << "  ";
        }
        
        for (int col = 0; col < row+1; col++)
        {
            n_last_digit = col+1;
            cout << col+1<< " ";
        }
        for (int number = n_last_digit; number>1;)
        {
            number--;
            cout << number <<" ";
        }
        
        cout << endl;
    }
    
}