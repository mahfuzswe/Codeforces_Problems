#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb push_back;
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<b; i++)
#define sq(a) (a)*(a)
using namespace std;


void mr_phoenix(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        
        if(s=="()"){
            cout<<"NO\n"; continue;
        }else{
            cout<<"YES\n";
            string ans(s.length(), '(');
            ans += string(s.length(), ')');
            
            string emp = "";
            flp(i,0,s.length()) emp += "()";
            
            if(ans.find(s)!= string::npos){
              cout<<emp<<'\n';
            }else{
                cout<<ans<<'\n';
            }
        }
    }
}

int32_t main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    mr_phoenix();

    return 0;
}
