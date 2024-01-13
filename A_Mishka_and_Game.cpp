#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin>>n;

    int m = 0;
    int c = 0;
    
    while(n--){
        int x, y; cin >> x >> y;

        if(x > y) m++;
        if(x < y) c++;
    }

    if(m > c) cout << "Mishka\n";
    else if( m < c) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
    
    return 0;
}