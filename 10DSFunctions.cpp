#include <iostream>
using namespace std;

void printName(string name, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << name << endl;
    }
}

int main()
{
    // Functions-->Block of code linked to well-defined task.
    // 1)Reusable 2)Shorten the length 3)Readability
    //"void-function" kae saath hum return statement laga sakte hain but koi data uske saath nahi return kareinge.
    //Also read the concept of "function-call-stack" from notebook.
    int n;
    string name;
    cout << "Enter name" << endl;
    cin >> name;
    cout << "How much time you want to print it" << endl;
    cin >> n;
    printName(name, n);
    return 0;
}