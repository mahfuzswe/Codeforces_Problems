#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n);
        for(int &x: a) cin >> x;

        sort(a.begin(), a.end(), [](int x, int y){
            return x % 2 < y % 2; // returns true if x is even and y is odd
        }); // bcoz x%2 will be 0 for even numbers and less than y%2 which will be 1 for odd numbers and false otherwise
            // means all even numebr will be placed before odd numbers in the sorted vector.
        

        int ans = 0;
        for(int i = 0; i < n; ++i){
            for(int j = i+1; j < n; ++j){
                ans += __gcd(a[i], 2*a[j]) > 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}