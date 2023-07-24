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


void mr_phoenix(){
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        if((a+b)>=10 || (b+c)>=10 || (c+a)>=10) cout<<"YES\n";
        else cout<<"NO\n"; 

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