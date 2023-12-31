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
     int n; cin >> n;
     
     int u=0, r=0, d=0, l=0;

     while(n--){
        int x1, y1; cin >> x1 >> y1;
        if(x1 == 0 && y1 == 0){
            continue;
        }else{
            if(x1 > 0) r++;
            if(y1 > 0) u++;
            if(x1 < 0) l++;
            if(y1 < 0) d++;
        }
     }

    if(u == 0 || r == 0 || d == 0 || l == 0) cout << "YES\n";
    else cout << "NO\n";
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}