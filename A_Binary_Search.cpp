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

bool bS(int n, int arr[], int x){
    int st = 0;
    int nd = n-1;
    while(st <= nd){
        int mid = (st+nd)/2;
        if(x == arr[mid]) return true;
        else if(x > arr[mid]) st = mid + 1;
        else nd = mid - 1;
    }
    return false;

}

void mahfuzswe(){
   int n, k; cin>>n>>k;
   int arr[n];
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }

   while(k--){
    int x; cin>>x;
    if(bS(n,arr,x)) cout<<"YES\n";
    else cout<<"NO\n";
   }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}