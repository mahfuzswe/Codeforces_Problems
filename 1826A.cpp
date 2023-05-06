#include <bits/stdc++.h>
using namespace std;

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
        int ans = -1;
        for (int k = 0; k <= n; k++)
        {
            int t = 0, l = 0;
            for (int i = 1; i <= n; i++)
            {
                if (k >= arr[i])
                {
                    t++;
                }
                else
                {
                    l++;
                }
            }
            if (l == k)
            {
                ans = k;
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
