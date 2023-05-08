#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = __gcd(ans, abs(arr[i] - arr[n - i + 1]));
        }
        cout << ans << endl;
    }

    return 0;
}
