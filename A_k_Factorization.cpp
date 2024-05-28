// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



// what to think | how to think | don't be stupid
signed main(){
    int n, k; cin >> n >> k;
    vector<int>v;
    int cnt  = 0, i = 2;
    while(n != 1){
        bool flag = false;
        if(n % i == 0){
            while(n % i == 0){
                if(cnt == (k-1)){
                    flag = true;
                    break;
                }
                v.push_back(i);
                n /= i;
                cnt++;
            }
        }
        if(flag) break;
        i++;
    }

    if(cnt == k - 1 and n > 1){
        for(auto x: v) cout << x << " ";
        cout << n << '\n';
        return 0;
    }
    else cout << -1 << '\n';
    
    return 0;
}