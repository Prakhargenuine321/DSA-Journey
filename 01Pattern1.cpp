#include<iostream>
using namespace std;

int main(){
    //this is hollow inverted pyramid program
    int num_star;
    cout << "Enter the size of pattern required!" << endl;
    cin >> num_star;
    for (int i = 0; i < num_star ; i++)
    {
        for (int j = 0; j < num_star-i; j++)
        {
            if (i == 0){
                cout << "* ";
            }
            else{
                if (j==0 || j==num_star-i-1){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout <<"\n";
    }
    
}