#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();

    int left = 0, right = col - 1, top = 0, bottom = row - 1;

    while (left <= right && top <= bottom)
    {

        // printing left to right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(arr[top][i]);
        }
        top++;

        // printing top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(arr[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            // printing right to left
            for (int i = right; i >= left; i--)
            {
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }

        if (left <= right)
        {
            // printing bottom to top
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}