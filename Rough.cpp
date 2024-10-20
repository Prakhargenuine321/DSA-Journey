#include<bits/stdc++.h>
using namespace std;

bool parseBoolExp(string expression){
    stack<char> stk;

    bool answer;

    int size = expression.length();

    for(int i = size - 1; i >= 0 ; i--){
        if(expression[i] == 'f' || expression[i] == 't'){
            stk.push(expression[i]);
        }else if(expression[i] == '!' || expression[i] == '&' || expression[i] == '|'){
            bool ans = 1;
            if(stk.top() == 'f'){
                ans = 0;
            }

            while(!stk.empty()){
                bool top = 1;
                if(stk.top() == 'f'){
                    top = 0;
                }
                if(expression[i] == '|'){
                    ans = ans | top;
                    stk.pop();
                }else if(expression[i] == '&'){
                    ans = ans & top;
                    stk.pop();
                }else{
                    ans = !top;
                    stk.pop();
                }
            }
            answer = ans;
        }
    }
    return answer;
}

int main(){

    bool answer = parseBoolExp("!(|t(&(f,t,f)))");

    cout << answer;

    return 0;
}