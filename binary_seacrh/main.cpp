#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> v, int x)
{
    int n = v.size();
    int l = 0, r = n - 1;
    int ans = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}
int upperBound(vector<int> v, int x)
{
    int n = v.size();
    int l = 0, r = n - 1;
    int ans = l;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid] <= x)
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3, 3, 3, 4, 4, 5, 6, 6};
    int l = 0, r = 9;

    int x;
    cin >> x;

    cout << lowerBound(v, x) << endl;
    cout << upperBound(v, x) << endl;
}