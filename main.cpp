#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v{1, 2, 3, 4, 5};
    for (auto it = begin(v); it != end(v); it = next(it)) {
        cout << *it << endl;
    }
}