#include<iostream>
using namespace std;

int main(){
    //full pyramid
    int num_star;
    cout << "Enter the size of star pattern you want!"<<endl;
    cin >> num_star;
    int count_star = num_star;
    for (int i = 0; i < num_star; i++)
    {
        for (int j = 0; j < count_star; j++)
        {
            if (j >= num_star-i-1)
            {
                cout << "* ";
            }
            else{
                cout << "  "; 
            }
        }
        cout << endl;
        count_star++;
    }
    
}