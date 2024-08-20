#include <bits/stdc++.h>
using namespace std;

bool lemonadeChange(vector<int> &bills){
    int n = bills.size();
    int count5 = 0;
    int count10 = 0;
    for(int i = 0 ; i < n ; i++){
        if(bills[i] == 5){
            count5++;
        }
        else if(bills[i] == 10){
            count10++;
            if(count5 > 0){
            count5--;
            }else{
                return false;
            }
        }
        else{
            if(count5 > 0 && count10 > 0){
                count5--;
                count10--;
            }
            else if(count5 >= 3 ){
                count5 = count5 - 3;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main()
{
    vector<int> bills = {5 , 5 , 10 , 10 , 5 , 5 , 10 , 20};
    bool ans = lemonadeChange(bills);
    cout << ans;
    return 0;
}