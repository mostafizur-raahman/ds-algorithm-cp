#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, q;
        cin >> n >> q;
        vi v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vi pre(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + v[i - 1];
        }

        while (q--) {
            ll l, r;
            cin >> l >> r;
            cout << pre[r] - pre[l - 1] << "\n";
        }
    }
}