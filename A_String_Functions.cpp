#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,x,l,r; char c;
    cin>>n>>q;
    string s, ss;
    cin>>s;

    while(q--){
        cin>>ss;
        if(ss=="pop_back") s.pop_back();
        if(ss=="front") cout<<s.front()<<'\n';
        if(ss=="back") cout<<s.back()<<'\n';
        if(ss=="sort"){
            cin>>l>>r;
            if(r<l) swap(l,r);
            sort(s.begin()+l-1, s.begin()+r);
        }
        if(ss=="reverse"){
            cin>>l>>r;
            if(r<l) swap(l,r);
            reverse(s.begin()+l-1, s.begin()+r);
        }
        if(ss=="print"){
            cin>>x;
            cout<<s[x-1]<<'\n'; 
        }
        if(ss=="substr"){
            cin>>l>>r;
            if(r<l) swap(l,r);
            cout<<s.substr(l-1, r-l+1)<<'\n';
        }
        if(ss=="push_back"){
            cin>>c;
            s.push_back(c);
        }
    }

    return 0;
}

// Time Complexity: O(q*n)