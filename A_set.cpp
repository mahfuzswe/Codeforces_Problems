#include<bits/stdc++.h>
using namespace std;

int main(){

    int q,x; cin>>q;
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
            if(st.find(x)!=st.end()){
                cout<<"found\n";
            }
            else{
                cout<<"not found\n";
            }
            // if(st.count(x)>0) cout<<"found\n";
            // else cout<<"not found\n";
        }
        if(s=="lower_bound"){
            cin>>x;
            auto ans = st.lower_bound(x);
            if(ans == st.end()){
                cout<<-1<<'\n';
            }else{
                cout<<*ans<<'\n';
            }
        }
        if(s=="upper_bound"){
            cin>>x;
            auto ans = st.upper_bound(x);
            if(ans == st.end()){
                cout<<-1<<'\n';
            }else{
                cout<<*ans<<'\n';
            }
            
        }
    }

    return 0;
}