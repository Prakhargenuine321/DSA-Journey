#include<iostream>
using namespace std;

int main(){
    //Counting and Extraction of digits in integer
    int n;
    cout << "Enter the number to extract data" <<endl;
    cin >> n;
    int num;
    while (n!=0)
    {
        num = n % 10; //to extract digit-->aur digit extract in reverse order hoti hai aur inhi ka use karke hum different questions kar sakte hain
        cout << num << " ";
        n = n / 10; //to update the entered number for extracting another digit
    }
    
    return 0;
}