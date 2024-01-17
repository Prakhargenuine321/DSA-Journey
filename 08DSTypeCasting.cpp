#include<iostream>
using namespace std;

int main(){
    //TypeCasting -->Toh bhai simple si baat hai ki aek tarah kae datatype ko doosrae tarah kae datatype maein convert karna.
    //jaise ki (int --> char) maein ya phir (int-->float) etc.
    //Ab dekho bhai TypeCasting do tarah ki hoti hai -->1)Implicit -->2)Explicit
    //1)Implicit-->Compiler automatically lower ko higher datatype maein typecast karta hai jissae precision maintain kari ja sake.
    int a = 10;
    float b = 20.5;
    float c = a + b;
    cout << c << "-->Daekho yahan par int(lower) ko float(higher) maein promote kiya gaya jissae precision maintain kiya ja sake!"<<endl;

    char ch = 'A';
    int b1 = ch + 1;
    cout << b1 << "-->char to int"<<endl;

    int a1 = 65;
    char ch1 = a1 + 1;
    cout << ch1 << "-->int to char"<<endl;

    //2)Explicit-->Manually done using "casting-operator"-->().

    double pi = 3.245678;
    int intpi = (int)pi;
    cout << intpi << "-->double to int" << endl;

    float num = 65.35;
    char ch2 = (char)num;
    cout << ch2 <<"-->float to char" <<endl;

    int num1 = 10;
    int num2 = 3.0;
    float div1 = num1 / num2;
    float div2 = num1 / ((float)num2); //*interview
    cout << div1 <<"-->See the O/P and then see below one!"<<endl;
    cout << div2 <<"-->Here we did explicit conversion!"<<endl;
    return 0;

}