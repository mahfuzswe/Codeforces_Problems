#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n; cin >> n;
    int first = 0, second = 1, third;

    if(n == 1) cout << 0 << '\n';
    else if(n == 2) cout << 1 << '\n';
    else{
        while(n > 2){
            third = first + second;
            first = second;
            second = third;
            n--;
        }
        cout << third << '\n';
    }

    return 0;
}