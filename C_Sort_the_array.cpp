#include<bits/stdc++.h>
using namespace std;

int cnt[100005] = {0};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        cnt[x]++;
    }

    for(int i = 1; i <= 100000; ++i){
        while(cnt[i]--){
            cout << i << " ";
        }
    }

    cout << '\n';
 
    return 0;
}
