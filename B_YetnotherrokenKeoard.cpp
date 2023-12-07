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
     string s; cin>>s;
     int n = s.size();

     vector<int>cap,sml;
     vector<bool>ok(n+2, true);

     for(int i=0; i<n; i++){
      if(s[i]=='b'){
         if(!sml.empty()){
            ok[sml.back()] = false;
            sml.pop_back();
         }
         ok[i] = false;
      }
      else if(s[i]=='B'){
         if(!cap.empty()){
            ok[cap.back()] = false;
            cap.pop_back();
         }
         ok[i] = false;
      }
      else if(s[i]>='A' && s[i]<='Z') cap.push_back(i);
      else sml.push_back(i);
     }

     for(int i=0; i<n; i++){
         if(ok[i]) cout<<s[i];
     }cout<<'\n';
  }
}
      
int32_t main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);	cout.tie(0);
   
   mahfuzswe();
   
   return 0;
}