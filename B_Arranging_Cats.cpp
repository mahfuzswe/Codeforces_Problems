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
     string s1, s2;
     cin >> s1 >> s2;

     int ans = 0;
     
     int os1 = 0, os2 = 0;
     
     for(int i=0; i<n; i++){
        if(s1[i] == '1') os1++;
        if(s2[i] == '1') os2++;
     }
     
     if(os1 > os2){
        int x = os1 - os2;
        ans += x;
     }
     
    //  cout << os1 << " " << os2 << '\n';
     

    for(int i=0; i<n; i++){
        if(s2[i] == '1' && s1[i] != '1') ans ++;
     }

     cout << ans << '\n';

  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}