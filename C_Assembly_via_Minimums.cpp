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
   int t;
   cin>>t;
   while(t--){
      int n; cin>>n;
      int a[((n*n-n)/2)+1];
      multiset<int>ms;
      for(int i=0; i<((n*n-n)/2); i++){
         cin>>a[i];
         ms.insert(a[i]);
      }
      vector<int>res;
      int curr=1;
      while(!ms.empty()){
         auto temp = *ms.begin();
         for(int i=1; i<=n-curr; i++){
            ms.erase(ms.find(temp));
         }
         res.push_back(temp);
         curr++;
      }
      res.push_back(res.back());
      for(int i = 0; i<res.size(); i++){
         cout<<res[i]<<" ";
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