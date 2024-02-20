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
     int n, m; cin >> n >> m;
     vector<int>v;
     for(int i=0; i<n; i++){
        int x ; cin >> x;
        v.push_back(x);
     }

     string s; cin >> s;
     int xx = 0;

     while(n>0){
        int p = 1;
        for(int i=0; i<n; i++){
            p *= v[i];
        }
        int r = p%m;

        if(r < 0){
            r = (r+m)%m;
        }
        cout << r << " ";

        if(s[xx] == 'L'){
            auto it = v.begin();
            v.erase(it);
        } 
        if(s[xx] == 'R' ) v.pop_back();
        xx++;
        n--;
     }cout << '\n';
    
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}