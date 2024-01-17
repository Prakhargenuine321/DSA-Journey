#include<iostream>
using namespace std;

int main(){
    //This is special pattern #4
    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    int num_star;
    cout << "Enter the number of rows in pattern"<<endl;
    cin >> num_star;
    for (int i = 0; i < num_star; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            if (j%2==0)
            {
                cout << i+1;
            }
            else
            {
                cout << "*";
            }
        }
        cout <<endl;
    }
    
}