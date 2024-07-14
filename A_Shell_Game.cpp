#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n, x; 
    cin >> n >> x;

    while(n % 6 != 0){
        if(n % 2 == 0){
            if(x == 1) x = 2;
            else if(x == 2) x = 1;
        }
        if(n % 2){
            if(x == 1) x = 0;
            else if(x == 0) x = 1;
        }
        n--;
    }
    cout << x << '\n';

    return 0;
}