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
     int n,x; cin>>n;
     vector<int>s;
     for(int i=0; i<n; i++){
        cin>>x;
        s.push_back(x);
     }


    for(int i=n-1; i>0; i--){
    if((s[i-1]==s[i]) || (s[i-1]%2==0 && s[i]%2==0) || (s[i-1]%2!=0 && s[i]%2!=0)){
        s.erase(s.begin() + i);
    }
}

// cout<<s.size()<<'\n';

    for(int i=0; i<s.size(); i++){
        cout<<s[i]<<" ";
     }
     cout<<'\n';

     
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);	cout.tie(0);
    
    mahfuzswe();
    
    return 0;
}