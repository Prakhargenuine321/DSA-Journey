#include<iostream>
using namespace std;

int main(){
    //This is special pattern #1
    // * * * *   * * * *
    // * * *       * * *
    // * *           * *
    // *               *
    int num_star;
    cout << "Enter size of the pattern required!"<<endl;
    cin >> num_star;
    int mid = (2*num_star+1)/2;
    for (int i = 0; i < num_star ; i++)
    {
        for (int j = 0; j < 2*num_star+1; j++)
        {
            if(j<mid-i || j>mid+i){
                cout << "* ";
            }
            else{ 
                cout << "  ";
            }
        }
        cout << endl;
    }
    
}