#include<iostream>
using namespace std;

int main(){
    //here we have learnt about "break" and "continue"
    //1--> Use of breaks...
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            cout << "This Part is built for break" <<endl;
            break; //it eill break the coninuous flow of loop
        }
        cout << i << endl;
        
    }
    cout << "------Continue region starts------" << endl;
    //2--> Use of continue...
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            cout <<"This Part is built for skipping usage of continue" <<endl;
            continue; //skips current iteration
        }
        cout << i << endl;
    }
    
    return 0;
}