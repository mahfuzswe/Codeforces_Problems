#include<bits/stdc++.h>
using namespace std;


int main(){

    int t; cin>>t;
    while(t--){
        int n; string s;
        cin>>n>>s;
        set<int>st;
        for(int i=0; i<n-1; i++){
            st.insert((s[i]-'0')*100+s[i+1]-'0');
        }
        cout<<st.size()<<endl;
    }

    return 0;
}


