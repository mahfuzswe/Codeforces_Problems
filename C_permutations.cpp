#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,x;
    cin>>n>>q;
    string s,t;
    cin>>s;
    while(q--){
        cin>>t>>x;
        if(t=="prev_permutation"){
            while(x--){
                prev_permutation(s.begin(), s.end());
            }
            cout<<s<<'\n';
        }else{
            while(x--){
                next_permutation(s.begin(), s.end());
            }
            cout<<s<<'\n';
        }
    }

    return 0;
}

// Time Complexity: O(qnx)

