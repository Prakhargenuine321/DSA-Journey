#include <iostream>
using namespace std;

//Checking whether an entered number is member of fibonacci series without using "recursion-approach".

bool checkMember(int n) {
  int f1 = 1, f2 = 1;
  if (n == 0 || n == 1) {
    return true;
  } else {
    while (1) {
      int temp = f1 + f2;
      f1 = f2;
      f2 = temp;
      if (temp == n) {
        return false;
      } else if (temp > n) {
        return true;
      }
    }
  }
}

int main() {
  bool result = checkMember(8);
  if (result) {
    cout << "Its not an member of an fibo series" << endl;
  }
  else{
    cout << "Its an member of an fibo series" << endl;
  }
  return 0;
}