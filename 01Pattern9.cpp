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
    int mid;
    for (int i = 0; i < num; i++)
    {
        mid = (2*i+1)/2;
        for (int j = 0; j < 2*i+1; j++)
        {
            if(j > mid){
                cout << char(2*i+1-j+64);
            }
            else{
                cout << char(65+j);
            }
        }
        cout << endl;
    }
    
}