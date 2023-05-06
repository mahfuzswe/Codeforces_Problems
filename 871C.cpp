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
        int sk1 = 0, sk2 = 0, skb = 0, skn = 0;
        vector<int> m1;
        vector<int> m2;
        vector<int> mb;
        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin >> m >> s;

            if (s == "10")
            {
                sk1++;
                m1.push_back(m);
            }

            else if (s == "01")
            {
                sk2++;
                m2.push_back(m);
            }
            else if (s == "11")
            {
                skb++;
                mb.push_back(m);
            }
            else
                skn++;
        }

        auto min_m1 = min_element(m1.begin(), m1.end());
        auto min_m2 = min_element(m2.begin(), m2.end());
        auto min_mb = min_element(mb.begin(), mb.end());

        if ((sk1 >= 1 && sk2 >= 1) || skb >= 1)
        {
            if (skb >= 1)
            {
                cout << *min_mb << endl;
            }
            else if ((sk1 >= 1 && sk2 >= 1) && skb == 0)
            {
                cout << *min_m1 + *min_m2 << endl;
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
