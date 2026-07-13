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
        }
        bool isUnsorted = false;
        ll diff = INT_MAX;
        for (int i = 1; i < n; i++) {
            if (v[i] < v[i - 1])
                isUnsorted = true;

            diff = min(diff, abs(v[i] - v[i - 1]));
        }
        if (isUnsorted) {
            cout << 0 << endl;
        } else
            cout << (diff / 2) + 1 << endl;
    }
}