#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
void solve()
{
    ll n;
    cin >> n;
    ll ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x < 0)
        {
            ans = min(ans, abs(x));
        }
        else
        {
            ans = min(ans, x);
        }
    }
    cout << ans << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}