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
#define NeedForSpeed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
        
int gcd(int a, int b){if(a==0) return b; return gcd(b%a,a);}
int lcm(int a, int b){return (a*b)/gcd(a,b);}
        
void mahfuzswe(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int ans = 0;
        sort(arr, arr+n);

        for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                ans += abs(arr[i] - arr[j]);
            }
        }

        cout << ans << '\n';
    }
}
        
int32_t main(){
    NeedForSpeed
    
    mahfuzswe();
    
    return 0;
}