// A number N is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
// Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.

// Example 1:

// Input: N = 3
// Output: 1 2
// Explanation: The first factorial number is 
// 1 which is less than equal to N. The second 
// number is 2 which is less than equal to N,
// but the third factorial number is 6 which 
// is greater than N. So we print only 1 and 2.


//Using normal approach.
// class Solution
// {
// public:
//     vector<long long> factorialNumbers(long long N)
//     {
//         // Write Your Code here
//         long long num = 1;
//         long long fact = 1;
//         bool flag = 1;
//         vector<long long> storeIt;
//         while(flag){
//             fact = fact * num;
//             num++;
//             if(fact <= N){
//                 storeIt.emplace_back(fact);
//             }
//             if(fact > N){
//                 flag = 0;
//             }
//         }
//         return storeIt;
//     }
// };



//Using recursion
// int ifFact(int i){
//     if(i==1 || i==0){
//         return 1;
//     }
//     else{
//         return i*ifFact(i-1);
//     }
// }

// vector<long long> factorialNumbers(long long n) {
//     // Write Your Code Here
//     int num;
//     bool flag = 1;
//     int i =1;
//     vector<long long> ans;
//     while(flag){
//         num = ifFact(i);
//         if(num <= n){
//             ans.push_back(num);
//             i++;
//         }
//         else{
//             flag = 0;
//         }
//     }
//     return ans;
// }


//Optimal Solution --> No need to check factorial again and again
// vector<long long> factorialNumbers(long long n) {

//     // Write Your Code Here

//     vector<long long> ans;

//     long long fact{1};

//     int i{2};

//     while(fact <= n){

//         ans.push_back(fact);

//         fact *= i;

//         i++;

//     }

 

//     return ans;

// }