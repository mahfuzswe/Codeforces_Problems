#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string ans;
    int cnt_up = 0, cnt_lw = 0;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])) cnt_up++;
        else cnt_lw++;
    }
    if(cnt_up>cnt_lw){
        for(int i=0; i<s.size(); i++){
            ans = toupper(s[i]);
            cout<<ans;
        }cout<<'\n';
    }else{
        for(int i=0; i<s.size(); i++){
            ans = tolower(s[i]);
            cout<<ans;
        }cout<<'\n';
    }
    return 0;
}