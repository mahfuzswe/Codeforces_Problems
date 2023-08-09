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

void mr_phoenix(){
   int t; cin>>t;
   while(t--){
        string s; cin>>s; s = '0' + s;
        int n = s.size();

        for(int i=s.size()-1; i>=0; i--){
            if(s[i]>='5') s[i-1]++, n=i;
        }
        for(int i=(s[0]=='0'); i<s.size(); i++){
            if(i>=n) cout<<'0';
            else cout<<s[i];
        }
        cout<<'\n';
    }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}