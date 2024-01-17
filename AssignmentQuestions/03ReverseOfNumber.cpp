#include<iostream>
using namespace std;

int main() {
    //Reverse of a number.
	int n,a=0;
	cin>>n;
    int z = n,digits=0;
    while(z!=0){
        z = z/10;
        digits++;
    }
    while(n!=0){
        int k = n%10,z=digits-1;
        while(z--){
            k = k*10;
        }
        a = a + k;
        digits--;
        n = n/10;
    }
    cout<<a<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"O/P daekh kar khush mat ho iskae peechae ki maths ko samjho bhai!"<<endl;
    cout<<"-----------------------------------------------------------------"<<endl;
    return 0;
}