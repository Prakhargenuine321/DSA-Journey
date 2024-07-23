//Here I am only writing logic not full code.
//Here is question-->
//Given two numbers A and B. The task is to find out their LCM and GCD.

// Example 1:

// Input:
// A = 5 , B = 10
// Output:
// 10 5
// Explanation:
// LCM of 5 and 10 is 10, while
// thier GCD is 5.



//SOLUTION-->

//  vector<long long> lcmAndGcd(long long A , long long B) {
//         // code here
//         long long num1 = A;
//         long long num2 = B;


//         //GCD
//         long long gcdNum;
//         while(A>0 && B>0){
//             if(A > B){
//                 A = A % B;
//             }
//             else{
//                 B = B % A;
//             }
//         }
//         if(A == 0){
//             gcdNum = B;
//         }
//         else{
//             gcdNum = A;
//         }
        
        
//         //LCM
//         long long lcmNum = (num1 * num2)/ gcdNum; //-->This the method to find out the LCM of an number by utilizing GCD
//         vector<long long> answer;
//         answer.emplace_back(lcmNum);
//         answer.emplace_back(gcdNum);
//         return answer;
        
//     }