#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int cost = prices[i] - mini;
        profit = max(cost, profit);
        mini = min(prices[i], mini);
    }
    return profit;
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    int profitWeGet = maxProfit(prices);
    cout << "Profit generated will be: " << profitWeGet <<endl; 

    return 0;
}