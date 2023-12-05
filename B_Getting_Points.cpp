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
   int T;
   cin>>T;
   while(T--){
     int n,p,l,t; cin>>n>>p>>l>>t;
     int start = 0;
     int end = n;
     int mid;
     int total = (n+6)/7;
     while(end - start > 1){
        mid = (start + end) / 2;
        int st = mid + 1;
        int pts = (n-mid) * l;
        int work = (n-mid);
        int temp = min(work*2, total);
        pts = pts + temp*t;
        if(pts >= p) start = mid;
        else end = mid;
     }
     cout<<start<<'\n';

  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}