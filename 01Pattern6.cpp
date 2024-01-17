#include<iostream>
using namespace std;

int main(){
    //This is special pattern #2
    // *               *
    // * *           * *
    // * * *       * * *
    // * * * *   * * * *
    int num_star;
    cout << "Enter size of the pattern required!"<<endl;
    cin >> num_star;
    int mid = (2*num_star+1)/2;
    for (int i = 0; i < num_star ; i++)
    {
        for (int j = 0; j < 2*num_star+1; j++)
        {
            if(j< mid+i-3 || j>mid-i+3){
                cout << "* ";
            }
            else{ 
                cout << "  ";
            }
        }
        cout << endl;
    }
}