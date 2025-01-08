#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        long long l, r;
        cin >> l >> r;

        long long d = 0;
        int i;
        for (i = 30; i >= 0; i--) {
            if ((r >> i & 1) == (l >> i & 1)) {
                if (r >> i & 1) {
                    r -= (1LL << i);
                    l -= (1LL << i);
                    d += (1LL << i);
                }
            } else {
                break;
            }
        }

        int p = i;
        if (l == (1LL << p) - 1) {
            cout << (1LL << p) - 1 + d << ' ' << (1LL << p) + d << ' ' << (1LL << p) + 1 + d << '\n';
        } else {
            cout << (1LL << p) - 2 + d << ' ' << (1LL << p) - 1 + d << ' ' << (1LL << p) + d << '\n';
        }
    }

    return 0;
}