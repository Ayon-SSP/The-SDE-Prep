/* Question : You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int maxProfit(vector<int> &prices)
{
    int min_so_far = prices[0]; // to calculate minimum so far.
    int max_profit = 0;         // to calculate maximum profit.
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < min_so_far)
        {
            min_so_far = prices[i];
        }
        else if (prices[i] - min_so_far > max_profit)
        {
            max_profit = prices[i] - min_so_far;
        }
    }
    return max_profit;
}
int main()
{
    fastio;
    int n; // entering number of days...
    cout << "Enter number of days : ";
    cin >> n;
    cout << endl;
    vector<int> prices; // to enter price of given stock on ith day...
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        prices.emplace_back(l);
    }
    cout << maxProfit(prices) << endl;
    return 0;
}
