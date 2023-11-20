#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n,q,x; cin>>n>>q;
    set<int>st;
    vector<int>ans;
    int z;
    for(int i=0; i<n; i++){
        cin>>z;
        st.insert(z);
    }

    for(auto y: st){
        ans.push_back(y);
    }

    while(q--){
        cin>>x;

        auto pos = lower_bound(ans.begin(), ans.end(), x)-ans.begin();
        cout<<pos<<" ";
        auto pos1 = upper_bound(ans.begin(), ans.end(), x)-ans.begin();
        cout<<st.size()-pos1<<'\n';
        
    }

    return 0;
}