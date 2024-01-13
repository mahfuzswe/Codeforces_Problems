#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;

    int s = 1;
    int buk = 0;

    int ans = 0;

    if(n <=3 ) ans = 1;
    else{
        while(n > buk){
            buk = s + buk;
            s++;
            ans++;
            n -= buk;
        }
    }
    
    cout << ans << '\n';

    return 0;
}