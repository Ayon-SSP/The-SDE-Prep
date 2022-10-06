// ████████▄   ▄█   ▄█    █▄  ▄██   ▄      ▄████████ ███▄▄▄▄      ▄████████    ▄█    █▄
// ███   ▀███ ███  ███    ███ ███   ██▄   ███    ███ ███▀▀▀██▄   ███    ███   ███    ███
// ███    ███ ███▌ ███    ███ ███▄▄▄███   ███    ███ ███   ███   ███    █▀    ███    ███
// ███    ███ ███▌ ███    ███ ▀▀▀▀▀▀███   ███    ███ ███   ███   ███         ▄███▄▄▄▄███▄▄
// ███    ███ ███▌ ███    ███ ▄██   ███ ▀███████████ ███   ███ ▀███████████ ▀▀███▀▀▀▀███▀
// ███    ███ ███  ███    ███ ███   ███   ███    ███ ███   ███          ███   ███    ███
// ███   ▄███ ███  ███    ███ ███   ███   ███    ███ ███   ███    ▄█    ███   ███    ███
// ████████▀  █▀    ▀██████▀   ▀█████▀    ███    █▀   ▀█   █▀   ▄████████▀    ███    █▀

// #pragma GCC optimize "trapv"

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

int dp[10001][10001];

int lcs_length(string x, string y, int n, int m)
{
    if (dp[n][m] != -1)
        return dp[n][m];
    if (n == 0 || m == 0)
        return dp[n][m] = 0;
    if (x[n - 1] == y[m - 1])
        return dp[n][m] = 1 + lcs_length(x, y, n - 1, m - 1);
    else
        return dp[n][m] = max(lcs_length(x, y, n - 1, m), lcs_length(x, y, n, m - 1));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    memset(dp, -1, sizeof(dp));
    string x, y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();
    cout << lcs_length(x, y, n, m);

    return 0;
}