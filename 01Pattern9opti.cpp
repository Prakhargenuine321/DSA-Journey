#include<iostream>
using namespace std;

int main(){
    //This is special pattern #5
    // A
    // ABA
    // ABCBA
    // ABCDCBA
    int num;
    cout << "Enter the number of rows required"<<endl;
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        char ch;
        for (int col = 0; col < row+1; col++)
        {
            int number = col+1;
            ch = number + 'A' - 1;
            cout << ch;
        }
        for (char alphabet = ch ; alphabet>'A';)
        {
            alphabet--;
            cout << alphabet;
        }
        cout << endl;
    }
    
}    