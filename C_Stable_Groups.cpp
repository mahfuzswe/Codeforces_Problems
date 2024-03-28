#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n, k, x;
    cin >> n >> k >> x;

    int arr[n+3];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    sort(arr+1, arr+n+1);
    vector<int>ans;
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(arr[i+1] - arr[i] > x){
            cnt++;
            if(arr[i+1] - arr[i] - 1 >= 1){
                ans.push_back(arr[i+1]-arr[i]-1);
            }
        }
    }

    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size(); i++){
        int xx = ans[i];
        if(xx/x <= k && k > 0){
            cnt--;
            k -= (xx/x);
        }
        else break;
    }
    cout << cnt << '\n';

    return 0;
}