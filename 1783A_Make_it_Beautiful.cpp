#include<bits/stdc++.h>
using namespace std;


int main() {
    int t; cin >> t; // read the number of test cases

    while (t--) { // for each test case
        int n; cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sum = 0; // sum of all elements before the current element

        for (int i = 0; i < n; i++) {
            if (a[i] == sum) { // if the current element is equal to the sum of all elements before it
                cout << "NO" << endl; // it is not possible to reorder the array to make it beautiful
                return 0;
            }
            sum += a[i]; // add the current element to the sum
        }

        cout << "YES" << endl; // the array is already a beautiful array
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}


