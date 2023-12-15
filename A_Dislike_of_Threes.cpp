#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        for(int i=1; i<=2000; i++){
                if(i%3 == 0){
                    continue;
                }else if(i%10 == 3){
                    continue;
                }
                else{
                    v.push_back(i);
                }
        }
        cout << v[n-1] << '\n';
    }
    return 0;
}