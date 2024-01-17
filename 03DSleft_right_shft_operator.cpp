#include<iostream>
using namespace std;

int main(){
    //A)Left(<<) and Right(>>) shift operators.
    int a = 7;
    int n;
    cin >> n;
    cout << (a<<1) << endl; //yahan par iska mtlb hai ki "left shift" by 1-bit
    cout << (a<<2) << endl; //yahan par iska mtlb hai ki "left shift" by 2-bit
    cout << (a<<n) << endl; //toh iss tarah sae agar hum "left-shift" kar rahe by "n" then O/P will be (a*2^n)
    cout << (a>>n) << endl; //yahan par iska mtlb hai ki "right shift" by n-bit iski wajah sae number bahut large ho jayega
    unsigned int n2 = -100; //**unsigned-int kae case maein compiler handle nhi kar pa raha aur aek big +ve number as an O/P aa raha hai and uska reason yaeh hai ki "-100" store toh "0&1" ki form maein hi hoga but jab usko access kara jayega toh kyunki humnae usae "unsigned" mark kiya hai isliye woah "signed-bit" ko ignore karega aur bina 2's complement kiye poora number utha lega aur jiski wajah sae woh aek "big-positive" number print karega normally bhi aur shifting kae baad bhi. 
    cout << (n2>>1) << endl;
    int n3 = -100; //signed integer kae case maein compiler handle kar pa raha hai.
    cout << (n3>>1) <<"-->Iska Reason Bhi Padh Lena Mitra!"<< endl;
    int n4 = 100;
    cout << (n4>>2) << endl; //toh iss tarah sae agar hum "right-shift" kar rahe by "n" then O/P will be (a/2^n).

    //agar kisi value ko "left-shift" kar rahe hain by -ve number toh wahan par garbage value aayaegi but actually maein "0" aa raha hai because compiler will interpret "-1" as "31" and that is why O/P is "0".
    int a2 = -10; //in signed integer if number is negative toh uski "signed-bit" ko preserve kar liya jata hai aur jab 
    cout << (a2>>1) << endl;
    cout << (-10<<1) << endl;
    return 0;
}