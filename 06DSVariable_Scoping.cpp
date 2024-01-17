#include <iostream>
using namespace std;

int main()
{
    //Here we will study about "variabe-scoping"
    int age = 25; //this is global variable accessible from everywhere but isae hum aek bad practice ki tarah consider karenge reasons are mentoned below--> 1)Harder to understand 2)Information leakage(encapsulation problem) 3)Out of memory issues(remain in memory untill the program finishes) 4)
    if (true)
    {
        int a = 100; //local variable for number-1 "if" but global for number-2 "if"
        if (true)
        {
            int a = 200; //local variable for number-1 "if" we can redefine in it's nested form not in same block of code.
            cout << "Inside if number-2" << endl;
            cout << a << endl; //it will give priority to nearest variable value
        }
    }   
    cout << age << endl;
    return 0;
}