//This is the problem statement--> https://leetcode.com/problems/permutations/
#include<bits/stdc++.h>
using namespace std;


//Method1 -->Using extra space as an map 'int freq[]'
// void recurPermute(vector<int> &arr , vector<int> &ds , vector<vector<int>> &ans , int freq[]){
//     if(ds.size() == arr.size()){
//         ans.emplace_back(ds);
//         return;
//     }
//     for(int i = 0 ; i < arr.size() ; i++){
//         if(!freq[i]){
//             ds.emplace_back(arr[i]);
//             freq[i] = 1;
//             recurPermute(arr , ds , ans , freq);
//             freq[i] = 0;
//             ds.pop_back();
//         }
//     }
// }

//Method2 -->
void recurPermute(int index , vector<int> &arr ,  vector<vector<int>> &ans){
    if(index == arr.size()){
        ans.emplace_back(arr);
    }
    for(int i = index ; i < arr.size() ; i++){
        swap(arr[index] , arr[i]);
        recurPermute(index+1 , arr , ans);
        swap(arr[index] , arr[i]);
    }
}

int main(){
    vector<int> arr = {1 , 2 , 3};
    vector<vector<int>> ans;

    //Method1 -->
    // vector<int> ds;
    // int freq[arr.size()];
    // for(int i = 0 ; i < arr.size() ; i++) freq[i] = 0;
    // recurPermute(arr , ds , ans , freq);
    // for(int i = 0 ; i < ans.size() ; i++){
    //     for (int j = 0; j < arr.size(); j++)            
    //     {
    //         cout << ans[i][j] <<" ";
    //     }
    //     cout << endl;
    // }


    //Method2 -->Interviewer will ask for better approach in which we can only optimize space
    recurPermute(0 , arr , ans);
    for(int i = 0 ; i < ans.size() ; i++){
        for (int j = 0; j < arr.size(); j++)            
        {
            cout << ans[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}