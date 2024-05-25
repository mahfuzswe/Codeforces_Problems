#include<bits/stdc++.h>
using namespace std;
#define int long long

// beautify you're life with beautiful codes 

/*
    let's take 12, we can write 12 = 
    1 x 12 --> out
    2 x 6 so what ?
    3 x 4
    and let's solve it
*/

signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>divisors(n);
        for(int i = 0; i < n; i++) cin >> divisors[i];

        sort(divisors.begin(), divisors.end());

        int originalNum = divisors[0] * divisors[n-1];

        vector<int>tmp; // storing divisors of original number
        for(int i = 2; i*i <= originalNum; i++){
            if(originalNum % i == 0){
                tmp.push_back(i);
                if(originalNum/i != i){
                    tmp.push_back(originalNum/i);
                }
            }
        }

        sort(tmp.begin(), tmp.end());

        if(divisors == tmp) cout << originalNum << '\n';
        else cout << -1 << '\n';
 
    }

    return 0;
}