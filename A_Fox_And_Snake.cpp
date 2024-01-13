#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;

    for(int i = 1; i <= n; i++){
        if(i%2 != 0){
            for(int j = 1; j <= k; j++){
                cout << "#";
            }
            cout << '\n';
        }else{
            if(i%4 == 0){
                cout << "#";
                for(int j = 1; j < k; j++){
                    cout << ".";
                }
                cout << '\n';
            }else{
                for(int j = 1; j < k; j++){
                    cout << ".";
                }
                cout << "#\n";
            }
        }
    }

    return 0;
}