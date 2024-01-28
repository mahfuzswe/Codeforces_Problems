#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
  int t; cin >> t;
  while(t--){
    int n, f, a, b;
    cin >> n >> f >> a >> b;
    int x, ut = 0;
    while(n--){
      cin >> x;
      int y = min(b, (x-ut)*a);
      f -= y;
      ut = x;
    }
    
    if(f > 0) cout << "YES\n";
    else cout << "NO\n";

  }

  return 0;
}