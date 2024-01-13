#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    int s = n + m;

    int y = abs(n-m);

    if(y>1){
        if (n > m) cout << "Malvika\n";
        else cout << "Akshat\n";
    }else{
        int x = s/2;
        if(x%2 == 0) cout << "Malvika\n";
        else cout << "Akshat\n";
    } 

    return 0;
}