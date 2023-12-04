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
   int n; cin>>n;
   vector<int>a(n);
   int c;
   for(int i=0; i<n; i++){
    cin>>c;
    a.push_back(c);
   }

   int sum = 0;
   map<int, int>mp;
   for(auto x: a){
    mp[x]++;
    sum += x;
   }
   vector<int>ans;
   for(int i=0; i<n; ++i){
    sum -= a[i];
    mp[a[i]]--;
    if(sum%2==0 && mp[sum/2]>0){
        ans.push_back(i+1);
    }
    sum += a[i];
    mp[a[i]]++;
   }
   cout<<ans.size()<<'\n';
   for (auto it = ans.begin(); it != ans.end(); it++){
    cout << * it << " ";
   }
   cout<<'\n';
    
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}