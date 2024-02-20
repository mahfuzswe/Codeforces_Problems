#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int mx = 0;
    int idx = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > mx){
            mx = arr[i];
            idx = i;
        } 
    }

    if(mx <= m) cout << n << '\n';
    else cout << idx+1 << '\n';

    return 0;
}