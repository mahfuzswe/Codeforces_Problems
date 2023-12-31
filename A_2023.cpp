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
     int n, k; cin >> n >> k;
     vector<int>v(n);

     for(int i=0; i<n; i++){
        cin >> v[i];
     }

     int mul = 1;
     for(int i=0; i<n; i++){
        mul *= v[i];
     }
     
     if(2023%mul != 0) cout << "NO\n";
     else{ 
        cout << "YES\n";

        // int arr[6] = {1, 7, 17, 119, 289, 2023};
        int ans = 2023 / mul;
        
        if(k==1){
            cout << ans << '\n';
        }

        if(k==2){
            cout << ans << " " << 1 << '\n';
        }

        if(k==3){
            cout << ans << " " << 1 <<" "<< 1 << '\n';
        }

        if(k==4){
            cout << ans << " " << 1 <<" "<< 1 << " " << 1 << '\n';
        }

        if(k==5){
            cout << ans << " " << 1 <<" "<< 1 << " " << 1 << " " << 1 << '\n';
        }
    }
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}