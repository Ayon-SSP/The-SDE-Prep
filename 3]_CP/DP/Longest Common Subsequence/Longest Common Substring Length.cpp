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

int lcs_length(string x, string y, int n, int m)
{
    int dp[n + 1][m + 1];
    foe(i, 0, n)
    {
        foe(j, 0, m)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    int ans = INT_MIN;
    foe(i, 1, n)
    {
        foe(j, 1, m)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 0;
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x, y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();
    cout << lcs_length(x, y, n, m);

    return 0;
}