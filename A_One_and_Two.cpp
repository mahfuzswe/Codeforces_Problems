#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n], cnt = 0;
    for (int i = 0; i < n; ++i)
        cin >> arr[i], cnt += arr[i] == 2;

    if (cnt & 1)
    {
        cout << -1 << '\n';
        return;
    }

    cnt /= 2;
    for (int i = 0; i < n; ++i)
    {
        cnt -= arr[i] == 2;

        if (not cnt)
        {
            cout << i + 1 << '\n';
            return;
        }
    }
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}