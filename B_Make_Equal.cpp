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
     int arr[n];

     for(int i=0; i<n; i++){
        cin >> arr[i];
     }
     
     if(n == 1) cout << "YES\n";
     else{
        int x = 0;
        int y = 0;
        int m = n/2;

        for(int i=0; i<m; i++){
            x += arr[i];
        }

        for(int i=m; i<n; i++){
            y += arr[i];
        }

        if(x > y && (x+y)%n == 0) cout << "YES\n";
        else cout << "NO\n";
        }
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}