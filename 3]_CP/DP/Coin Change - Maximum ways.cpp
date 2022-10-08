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

int maximum_ways(int arr[], int n, int sum)
{
    int dp[n + 1][sum + 1];
    foe(i, 0, n)
    {
        foe(j, 0, sum)
        {
            if (i == 0)
                dp[i][j] = 0;
            if (j == 0)
                dp[i][j] = 1;
        }
    }
    foe(i, 1, n)
    {
        foe(j, 1, sum)
        {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] + dp[i][j - arr[i - 1]];
        }
    }
    return dp[n][sum];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 3;
    int arr[] = {1, 2, 3};
    int sum = 4;
    cout << maximum_ways(arr, n, sum);

    return 0;
}
