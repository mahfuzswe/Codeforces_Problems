#include<bits/stdc++.h>
using namespace std;
#define int long long 

signed main(){
    int customer, total_time, break_time;
    cin >> customer >> total_time >> break_time;

    int timeTakem = 0;
    while(customer--){
        int ayche, timeLagse;
        cin >> ayche >> timeLagse;

        timeTakem += timeLagse;
    }

    int timeBaki = total_time - timeTakem;
    int ans = timeBaki / break_time;

    cout << ans << '\n';

    return 0;
}