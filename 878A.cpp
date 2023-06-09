#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        for(int i=0; i<n; i++){
            cout<<s[i];
            int j = i+1;
            while(s[j] != s[i]) j++;
            i = j;
        }
        cout<<"\n";
    }

    return 0;
}