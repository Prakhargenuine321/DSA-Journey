#include<iostream>
using namespace std;

int main(){
    //Numeric Hollow Pyramid
    // 1 
    // 1 2
    // 1   3 
    // 1     4
    // 1       5
    // 1         6
    // 1           7
    // 1             8
    // 1 2 3 4 5 6 7 8 9
    int n = 9;
    cout << "1 "<<endl;
    for(int i = 0;i<n-2;i++){
        for (int j = 0; j <= i+1; j++)
        {
            if(j==0){
                cout << "1 ";
            }
            else if(j==i+1){
                cout << i+2 <<" ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
        
    }
    for(int  i = 0 ; i<n;i++){
        cout << i+1<<" ";
    }
    return 0;
}