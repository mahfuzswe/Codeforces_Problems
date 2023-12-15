#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main(){
    int n, x; cin>>n>>x;
    int stock = x;
    int nc = 0; // distressed kids
    while(n--){
        char sign; cin>>sign;
        int d; cin>>d;
        if(sign == '+'){
            stock += d;
        }
        else{
            if(stock >= d){
                stock -= d;
            }else{
                nc++;
            }
        }
    }
    cout<<stock<<" "<<nc<<'\n';

    return 0;
}