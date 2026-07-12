#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;
    vi v;
    v.push_back(0);
    for (int i = 1; i <= n; i++) {
        ll tmp;
        cin >> tmp;
        v.push_back(v[i - 1] + tmp);
    }
    while (q--) {
        ll l, r;
        cin >> l >> r;
        cout << v[r] - v[l - 1] << "\n";
    }
}