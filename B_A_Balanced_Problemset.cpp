#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
  int t; cin >> t;
  while(t--){
    int x, n; cin >> x >> n;
    int ans = 1;
    for(int i=1; i*i<=x; i++){
      if(x%i == 0){
        if(i>=n) ans = max(ans, x/i);
        if(x/i >= n) ans = max(ans, i);
      }
    }
    cout << ans << '\n';
  }

  return 0;
}