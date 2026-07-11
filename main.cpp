#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

ll sumOf1ToN(ll n) {
    return (n * (n + 1)) / 2;
}
void solve() {
    ll n;
    cin >> n;

    ll sum = sumOf1ToN(n);
    if (sum % 2 != 0) {
        cout << "NO\n";
    }
    ll target = sum / 2;
    vector<int> set1, set2;

    for (int i = n; i >= 1; i--) {
        if (i <= target) {
            set1.push_back(i);
            target -= i;
        } else {
            set2.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << set1.size() << endl;
    for (int i = 0; i < set1.size(); i++) {
        cout << set1[i] << " ";
    }
    cout << endl;
    cout << set2.size() << endl;
    for (auto u : set2) {
        cout << u << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}