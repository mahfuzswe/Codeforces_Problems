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


bool cmp(pair<string, int>&p1, pair<string, int>&p2){
  if(p1.second > p2.second) return true;
  else if(p1.second == p2.second){
    if(p1.first<p2.first){
      return true;
    }
    else return false;
  }
  else return false;
}

        
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    vector<pair<string, int>>v;

    for(int i=0; i<n; i++){
      string s; int x; 
      cin>>s>>x;
      v.push_back({s,x});
    }

    sort(v.begin(), v.end(), cmp);

    for(auto x:v){
      cout<<x.first<<" "<<x.second<<'\n';
    }
    
    return 0;
}