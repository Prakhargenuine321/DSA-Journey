//Question-->

// Given an array of N integers arr[] where each element represents the maximum length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
// Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.


//Sample Case-->

// Input :
// N = 6
// arr = {1, 4, 3, 2, 6, 7}
// Output: 2 
// Explanation: 
// First we jump from the 1st to 2nd element 
// and then jump to the last element.

//See Recursive Approach Here--> D:\DSA\Notes Regarding DSA\Notes for Problem Solving

//Similarly we can do it using Dynamic Programming(by using memoization technique) but it will also take a lot of time.

//Using Greedy Technique--> 
// Function to return minimum number of jumps to end of array

// class Solution{
//   public:
//     int minJumps(int arr[], int n){
//         // Your code here
//         int totalJumps = 0;
        
//         //destination is last index
//         int destination = n - 1;
//         int coverage = 0 , lastJumpIndex = 0;
        
//         //Base Case
//         if(n == 1) return 0;
        
//         // If the first element is 0, we cannot move anywhere
//         if (arr[0] == 0) return -1;
        
//         //Greedy Strategy: extend coverage as long as possible
//         for(int i = 0 ; i < n ; i++){
//             coverage = max(coverage , i + arr[i]);
            
//             if(i == lastJumpIndex){
//                 lastJumpIndex = coverage;
//                 totalJumps++;
                
//                 if(coverage >= destination){
//                     return totalJumps;
//                 }
//                             // If after jumping we cannot proceed further
//             if (i >= coverage) {
//                 return -1;
//             }

//             }
//         }
//         return -1;
//     }
// };