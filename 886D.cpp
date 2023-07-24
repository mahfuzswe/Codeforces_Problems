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
        int g,h; cin>>g>>h; int li[g];
        flp(c,0,g) cin>>li[c];
        sort(li, li+g); int c=0, opx=0;
        while(c<g){
            int d = c+1;
            while(d<g){
                if(li[d]-li[d-1]>h) break;
                d++;
            }
            int op=d-c;
            opx=max(opx,op);
            c=d;
        }cout<<g-opx<<'\n';
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