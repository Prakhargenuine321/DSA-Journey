#include<iostream>
using namespace std;

int main(){
    //A)yahan par hum "bit-wise operator padh rahe hain jab bhi hum koi decimal number input karte hain toh usko binary maein convert karke uski har aek single bit par bit-wise operator work karte hain."
    int a = 4; //4 in binary--> 00000100
    int b = 4; //4 in binary--> 00000100
               //              ----------
               //         (&)-->00000100 = 4
               //              ----------
    cout << (a&b) << endl; //1-->in sabhi ko brackets meain likhne ki aadat rakho jab bracket hatao to error aanae lagta hai
    int c = 5; //5 in binary--> 00000101
    int d = 4; //4 in binary--> 00000100
               //              ----------
               //         (|)-->00000101 = 5
               //              ----------
    cout << (c|d) << endl; //2-->"Bit-wise OR" operation.
    int e = 4; //4 in binary--> 00000100
               //              ----------
               //         (~)-->11111011
               //     here MSB = 1 so this is negative number so we have to do 2's complement to find original number.
               //     2's complement = 1's complement + 1 = 0000100 + 1 = 0000101 = 5
               // so O/P = -5
    cout << ~(e) << endl;//3-->"Bit-wise NOT" operation.
    int f = 5; //5 in binary--> 00000101
    int g = 10;//10in binary--> 00001010
               //              ----------
               //         (^)-->00001111 = 15
               //              ----------
    cout << (f^g) << endl;//3-->"Bit-wise XOR" operation agar different hai toh "1" O/P and same hai toh "0" O/P.
    return 0;
}