#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int>a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    vector<int>b(m);
    for(int i = 0; i < m; ++i) cin >> b[i];

    vector<int>c(n + m);
    
    int i = 0, j = 0;
    
    while(i < a.size() || j < b.size()){
        if(j == b.size() || i < a.size() and a[i] < b[j]){
            c[i + j] = a[i];
            i++;
        }
        else{
            c[i + j] = b[j];
            j++;
        }
    }

    for(auto &u: c) cout << u << " ";
    cout << '\n';

    return 0;
}