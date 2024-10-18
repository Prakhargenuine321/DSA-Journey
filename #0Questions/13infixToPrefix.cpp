#include<bits/stdc++.h>
using namespace std;


//Infix to Postfix -->Important to be understand.

//following steps will be followed
//#1)Reverse the given string.
//#2)Convert it in postfix.
//#3)Reverse the #2 string.


//function to set the prirority of symbols
int operatorPriority(char operat){

    if(operat == '^'){
        return 3;
    }else if(operat == '*' || operat == '/'){
        return 2;
    }else if(operat == '+' || operat == '-'){
        return 1;
    }
    
    return 0;
}


string infixToPostfix(string infix){
    string answer;

    stack<char> stk;

    //#1)reverse the infix notation.
    reverse(infix.begin(), infix.end());

    //convert '(' to ')' and vice-versa
    for(int i = 0 ; i < infix.length() ; i++){
        if(infix[i] == '('){
            infix[i] = ')';
        }else if(infix[i] == ')'){
            infix[i] = '(';
        }
    }

    //#2)converting this reverse one into postfix with change in 1 condition,
    //in "infix to postfix" we set priority as "<=" but here it will be "<" (strictly increasing).


    for(int i = 0 ; i < infix.length() ; i++){

        //if char at current index is 'operand' then just add to the answer
        if((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= '0' && infix[i] <= '9')){
            answer += infix[i];
        }else if(infix[i] == '('){
            //if it is open paranthesis '(' push it in stack
            stk.push(infix[i]);
        }else if(infix[i] == ')'){
            //if it is an closing paranthesis, then pop untill '(' is encountered 
            //also have a condition to check if "stk" is empty or not
            while(!stk.empty() && stk.top() != '('){
                answer += stk.top();
                stk.pop();
            }
            //opening brace is still in stack so pop out 
            stk.pop();
        }else{
            //following code will ensure right precedence.
            if(infix[i] == '^'){
                while(!stk.empty() && (operatorPriority(infix[i]) <= operatorPriority(stk.top()))){
                    answer += stk.top();
                    stk.pop();
                }
            }else{
                //except '^' operator
                while(!stk.empty() && (operatorPriority(infix[i]) < operatorPriority(stk.top()))){
                    answer += stk.top();
                    stk.pop();
                }
                stk.push(infix[i]);
            }
        }
    }

    while(!stk.empty()){
        answer += stk.top();
        stk.pop();
    }

    //#3)now again reverse the answer.
    reverse(answer.begin(), answer.end());

    return answer;
}

int main(){

    string infixNotation = "(2+(3*4))-5";

    cout << "Infix Notation is: "<< infixNotation <<endl;

    string postfixNotation = infixToPostfix(infixNotation);

    cout << "Postfix Notation is: "<< postfixNotation <<endl;
    
    return 0;
}

//Detailed steps how to implement-
// 1)Reverse the infix expression.
// 2)Swap parentheses: Replace ( with ) and vice versa.
// 3)Convert to postfix using a stack:
//  3.1)If the scanned character is an operand, add it to the result.
//  3.2)If the scanned character is an operator, pop from the stack until the top of the stack has an operator of lower precedence.
//  3.3)If the scanned character is an opening parenthesis, push it onto the stack.
//  3.4)If the scanned character is a closing parenthesis, pop from the stack until an opening parenthesis is encountered.
// 4)Reverse the postfix expression to get the prefix expression.