#include<iostream>
using namespace std;

int main(){
    //Switch Cases-->Alternative to long "if-else" statement
    //In switch(expression) -->expression only contains Integral data type which will only store "non-fractional" values as, (int , char , long , long long & their unsigned versions).
    //For controlling flow of execution we can use "break" and "continue".
    char op;
    float num1 , num2;
    cout << "Enter the first number"<<endl;
    cin >> num1;
    cout << "Enter the second number"<<endl;
    cin >> num2;
    cout << "Enter the sign of operation you want to perform!"<<endl;
    cin >> op;
    switch (op)
    {
        case '+':
            cout << "Your answer is: " << num1 + num2<<endl;
            break;
        case '-':
            cout << "Your answer is: " << num1 - num2<<endl;
            break;
        case '/':
            cout << "Your answer is: " << num1 / num2<<endl;
            break;
        case '*':
            cout << "Your answer is: " << num1 * num2<<endl;
            break;
        default:
            cout<< "Invalid Sign!"<<endl;
            break;
    }
    return 0;
}