#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb(e) push_back(e);
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<b; i++)
#define sq(a) (a)*(a)
#define all(x) x.begin(),x.end()
using namespace std;
        
void mr_phoenix(){
   int t; cin>>t;
   while(t--){
    int n,m; cin>>n>>m;
    vector<string> xc(n);

    flp(i,0,n) cin>>xc[i];

    vector<string>con;
    flp(i,0,m){
        string s="";
        flp(j,0,n){
            s+=xc[j][i];
        }con.push_back(s);
    }

    string eq ="vika";
    int j=0,i=0;

    while(i<m){
        if (con[i].find(eq[j]) != string::npos){
            j++;
        }
        if(j==4) break;
        i++;
    }

    if(j==4) cout<<"YES\n";
    else cout<<"NO\n";
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}
