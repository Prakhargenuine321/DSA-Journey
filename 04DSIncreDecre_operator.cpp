#include<iostream>
using namespace std;

int main(){
    //Pre/Post Increment and Decrement Operator
    int a =10;
    cout << ((++a)*(a++)) << endl;//iss line ka issue and output ka reason check and write it down below.
    //And iska reason yaeh hai ki iska evaluation "compiler-dependent" hai aur iska answer bhi unpredictable hai toh isae left to right eveluate karo but if interview maein poocha jaye toh simple si baat hai ki yaeh "compiler-dependent" hai and iss tarah ki practice ko avoid karna chahiye jahan par it's undefined behavior to modify a variable more than once between two sequence points.
    cout << "Baaki commented section padh liya hai toh iske alawa sab 1st Class hai bhidu!"<<endl;
    int b = 20;
    ++b;
    --b;
    cout << b << endl;
    b++;
    cout << b << endl;
    b--;
    cout << b << endl;
}