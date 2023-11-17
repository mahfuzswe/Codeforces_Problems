#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q,x; cin>>q>>x;
    string s;
    set<int>st;

    while(q--){
        cin>>s;
        if(s=="insert"){
            cin>>x;
            st.insert(x);
        }
        if(s=="find"){
            cin>>x;
            if(st.find(x) != st.end()) cout<<"found"<<'\n';
            else cout<<"not found\n";
        }
        if(s=="lower_bound"){
            cin>>x;
            auto it = st.lower_bound(x);
            if(it != st.end()){
                cout<< *it <<'\n';
            }
        }
        if(s=="upper_bound"){
            cin>>x;
            auto it = st.upper_bound(x);
            if(it != st.end()){
                cout<< *it <<'\n';
            }
        }
    }

    return 0;
}