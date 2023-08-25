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
   int t;
   cin>>t;
   while(t--){
        int n; cin>>n;
        vector<int>vec(n),sln;
        int cnt=1;
        flp(i,0,n){
            cin>>vec[i];
        } 
        sln.pb(vec[0]);

        flp(i,1,n){
            if(vec[i]>=vec[i-1]){
                sln.pb(vec[i]);
                cnt++;
            }else{
                sln.pb(vec[i]);
                sln.pb(vec[i]);
                cnt+=2;
            }
        }cout<<cnt<<'\n';

        flp(i,0,sln.size()){
            cout<<sln[i]<<" ";
        }cout<<'\n';
  }
}
        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    mr_phoenix();
    
    return 0;
}