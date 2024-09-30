#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;



signed main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        vector<int>idx;
        for(int i = 0; i < n; ++i){
            if(s[i] == '2') idx.push_back(i);
        }

        int cnt2 = idx.size();
        if(cnt2 == 1 or cnt2 == 2){
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        char arr[n][n];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                arr[i][j] = '.';

                if(i == j) arr[i][j] = 'X';
            }
        }



        for(int k = 0; k < idx.size(); ++k){
            int i = idx[k], j;
            if(k == idx.size() - 1) j = idx[0];
            else j = idx[k+1];

            arr[i][j] = '+';
            arr[j][i] = '-';

        }

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                if(arr[i][j] == '.') arr[i][j] = '=';
                cout << arr[i][j];
            }
            cout << '\n';
        }
    }
    
    return 0;
}