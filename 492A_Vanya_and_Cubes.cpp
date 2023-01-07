#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int cnt = 0, i = 1, m = 1;
    
    while(m <= n){
        m = ((i*i) + i) / 2;
        if(m > n) break;
        n = n - m;
        cnt++;
        i++;
    }
    cout<<cnt<<endl;

    return 0;
}

