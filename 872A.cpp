#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int flag = 1;
        for (char x : s)
            if (x != s[0])
            {
                flag = 0;
                break;
            }
        if (flag)
        {
            cout << "-1" << endl;
            continue;
        }
        flag = 1;
        int ans = s.size();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != s[s.size() - i - 1])
            {
                flag = 0;
                break;
            }
        }
        cout << ans - flag << endl;
    }

    return 0;
}
