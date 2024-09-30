#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, d; 
    cin >> n >> d;

    vector<pair<int, int>> v;
    for(int i = 0; i < n; ++i){
        int a, b; cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end()); // Sort friends by friendship factor
    int x = 0, y = 0, ans = 0;
    for(int i = 0; i < n; ++i){
        while(v[i].first - v[x].first >= d){
            y -= v[x].second; // Remove the money of the friend at position x
            x++;
        }

        y += v[i].second; // Add the money of the current friend
        ans = max(ans, y); // Update the maximum sum
    }
    cout << ans << '\n'; // Output the maximum sum
    
    return 0;
}