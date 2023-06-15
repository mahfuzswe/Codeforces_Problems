#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int neg = 0;
        vector<int>v;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(v.empty() || (!neg && v.back() <= a)){
                v.push_back(a);
                cout<<"1";
            }else if((!neg && v[0] >= a) || (neg && v.back() <= a && v[0] >=a)){
                neg = 1;
                v.push_back(a);
                cout<<"1";
            }else cout<<"0";
        }cout<<"\n";
    }
    return 0;
}