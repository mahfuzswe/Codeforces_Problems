#include<bits/stdc++.h>
#define int long long
#define double long double
#define pb push_back;
#define fi first
#define se second
#define pii pair<int, int>
#define mp make_pair
#define flp(i,a,b) for(int i=a; i<=b; i++)
#define sq(a) (a)*(a)
using namespace std;


void mahfuzswe(){
    string s; cin>>s;
    string t; cin>>t;

    int ss = 1;
    for(int i=0; i<t.size(); i++){
        if(s[ss-1] == t[i]){
            ss++;
        }
    }
    
    cout<< ss << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    mahfuzswe();

    return 0;
}
