#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
int gcd(int a, int b){if(a%b==0) return b; else return gcd(b, a%b);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
        
void mahfuzswe(){
   int t;
   cin>>t;
   while(t--){
     int x1, y1; cin >> x1 >> y1;
     int x2, y2; cin >> x2 >> y2;
     int x3, y3; cin >> x3 >> y3;
     int x4, y4; cin >> x4 >> y4;
     
     int bahu;

     if(y1 != y2) bahu = abs(y1 - y2);
     else if(y2 != y3) bahu = abs(y2 - y3);
     else if(y3 != y4) bahu = abs(y3 - y4);
     else if(y1 != y3) bahu = abs(y3 - y1);
     else if(y2 != y4) bahu = abs(y4 - y2);
     else bahu = abs(y1 - y4);

     int ans = bahu * bahu;

     cout << ans << '\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}