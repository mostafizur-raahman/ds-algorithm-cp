#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

void solve() {
    ll n;
    cin >> n;
    vi v;
    bool ans = 0;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    if (v[n - 1] >= 3) {
        cout << "YES" << endl;
        return;
    }
    if (n - 2 >= 0) {
        if (v[n - 2] >= 2) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        solve();
    }
}