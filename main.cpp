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
        ll n;
        cin >> n;
        vi v;
        int cntOf2 = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
            if (x % 2 == 0)
                cntOf2++;
        }
        if (cntOf2 % 2 == 1) {
            cout << "-1\n";
            continue;
        }
        if (cntOf2 == 0) {
            cout << "1\n";
            continue;
        }
        ll ans = cntOf2 / 2, count = 0;
        ;
        for (int i = 0; i < n; i++) {
            if (v[i] == 2) {
                count++;
                if (count == ans) {
                    cout << i + 1 << "\n";
                    continue;
                }
            }
        }
    }
}