#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fo(i, a, b) for (int i = a; i < b; i++)
#define foe(i, a, b) for (int i = a; i <= b; i++)
#define endl '\n'
#define ff first
#define ss second
#define MOD 1000000007

typedef long long int ll;
typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int subsets_with_given_sum(int arr[], int n, int sum)
{
    int dp[n + 1][sum + 1];

    // Initialisation
    dp[0][0] = 1;
    for (int j = 1; j <= sum; j++)
        dp[0][j] = 0;
    for (int i = 1; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
        }
    }

    return dp[n][sum];
}

int subsets_with_given_difference(int arr[], int n, int diff)
{
    int sum = 0;
    fo(i, 0, n) sum += arr[i];
    return subsets_with_given_sum(arr, n, (sum + diff) / 2);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 9;
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 1};
    int diff = 1;
    cout << subsets_with_given_difference(arr, n, diff) << endl;

    return 0;
}
