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
        int n; cin>>n;
        int arr1[n], arr2[n];
        flp(i,0,n){
            cin>>arr1[i]; arr2[i]=arr1[i];
        }
        sort(arr2, arr2+n);
        bool tmp = 0;
        int ans = 0;
        flp(i,0,n){
            if(arr1[i]!=arr2[i]){
                cout<<'0'<<'\n'; tmp = 1; break;
            }
        }
        if(tmp==0){
            int mn = INT_MAX, md;
            flp(i,0,n-1){
                if(arr1[i+1]-arr1[i]<mn){
                    mn = arr1[i+1]-arr1[i]; md = i;
                }
            }
            ans = (arr1[md+1]-arr1[md])/2+1;
            cout<<ans<<'\n';
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