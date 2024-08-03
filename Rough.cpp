#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    int n = arr.size();
    int ans[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            ans[j][n - 1 - i] = arr[i][j];
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}