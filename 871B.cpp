#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = 0, temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                temp++;
                ans = max(ans, temp);
            }
            else
            {
                temp = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
