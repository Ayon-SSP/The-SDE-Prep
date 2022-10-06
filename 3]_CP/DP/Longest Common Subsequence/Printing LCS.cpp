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

int dp[1001][1001];
string ans;

void fill_table(string x, string y, int n, int m)
{
    foe(i, 0, n)
    {
        foe(j, 0, m)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    foe(i, 1, n)
    {
        foe(j, 1, m)
        {
            if (x[i - 1] == y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return;
}

void get_lcs(string x, string y, int n, int m)
{
    ans = "";
    int i = n, j = m;
    while (i > 0 && j > 0)
    {
        if (x[i - 1] == y[j - 1])
        {
            ans.pb(x[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (dp[i - 1][j] == dp[i][j])
                i--;
            else
                j--;
        }
    }
    reverse(ans.begin(), ans.end());
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
    fill_table(x, y, n, m);
    get_lcs(x, y, n, m);
    cout << ans << endl;

    return 0;
}