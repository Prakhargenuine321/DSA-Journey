#include<iostream>
using namespace std;

int main(){
    //Floyd's Triangle
    //1
    //2 3
    //4 5 6
    //7 8 9 10
    //11 12 13 14 15
    int n;
    int num = 1;
    cout << "Enter the number of rows in pattern!" <<endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
}