#include<bits/stdc++.h>
#define cn cin>>
#define ct cout<<
#define pf printf
#define sc scanf
#define end pf("\n");
typedef long long ll;
#define yes pf("YES\n");
#define no pf("NO\n");
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
int n,x;cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
        if(s[i+1]=='0' && i<(n-1) )continue;
        if(s[i+2]=='0' && i<(n-2)){
            if(s[i+3]!='0' && i<(n-3))continue;
            if((i+3)>=n)continue;
        }

    if(s[i]!='0'){
        pf("%c",s[i]+96-48);
    }else{
        if(s[i+1]=='0'){
            if(s[i-1]=='1')cout<<"j";
            else cout<<"t";
            i++;
        }else{
            if(s[i-2]=='1')x=10+s[i-1]-48;
            else x=20+s[i-1]-48;
            pf("%c",96+x);
        }
    }
}
end
}
int main(){
    IOS
    int t;
    cin>>t;
  while(t--) solve();
  return 0;
}
