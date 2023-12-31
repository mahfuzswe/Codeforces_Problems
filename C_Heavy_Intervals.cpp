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
     int l[n], r[n], c[n];

     for(int i=0; i<n; i++){
        cin >> l[i];
     }

     for(int i=0; i<n; i++){
        cin >> r[i];
     }

     for(int i=0; i<n; i++){
        cin >> c[i];
     }

     sort(l, l+n);
     sort(r, r+n);
     sort(c, c+n);

     int sub[n];
     for(int i=0; i<n; i++){
        sub[i] = r[i] - l[i];
     }

     sort(sub, sub+n);

     int sum1 = 0;
     int p = 0;
     for(int i=n-1; i>=0; i--){
        int k = c[i] * sub[p];
        sum1 += k;
        p++;
     }

    int sum2 = 0;

    for(int i=0; i<n; i++){
        int k = c[i] * sub[i];
        sum2 += k;
    }

    if(sum1 < sum2) cout << sum1 << '\n';
    else cout << sum2 << '\n';

  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}