#include<bits/stdc++.h>
#define int long long int
#define mod 1000000007
#define int_max 1e18
#define inf 10000001
#define hae printf("YES\n")
#define na printf("NO\n")
 
using namespace std;
int ts=1;
 
char arr[100][100];
int v[100][100];
int n,m;
int res;
 
 
void dfs(int x, int y){
    v[x][y]=1;
    res++;
    if(x+1<n && arr[x+1][y]!='#' && !v[x+1][y]){
        dfs(x+1,y);
    }
    if(x-1>=0 && arr[x-1][y]!='#' && !v[x-1][y]){
        dfs(x-1,y);
    }
    if(y+1<m && arr[x][y+1]!='#' && !v[x][y+1]){
        dfs(x,y+1);
    }
    if(y-1>=0 && arr[x][y-1]!='#' && !v[x][y-1]){
        dfs(x,y-1);
    }
}
 
 
void solve()
{
    cin >> m >> n;
    int x=-1,y=-1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j]=='@'){
                x=i;
                y=j;
            }
        }
    }
    res=0;
    memset(v,0,sizeof(v));
    dfs(x,y);
    cout << "Case " << ts++ << ": " << res << endl;
 
}
 
 
int32_t main()
{
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}