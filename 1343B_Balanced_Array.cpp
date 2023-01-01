#include<bits/stdc++.h>
using namespace std;
int t, n, i;
long long sum;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        sum = (long long)n * (n / 2);
        if (sum % n != 0) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        sum /= n;
        for (i = 1; i <= n / 2; i++) {
            cout << i * 2 << " ";
        }
        for (i = 1; i <= n / 2; i++) {
            cout << sum * 2 - (i * 2 - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
