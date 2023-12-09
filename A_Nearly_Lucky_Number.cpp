#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    bool check = true;
    
        for(int i=0; i<s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            check = true;
        }
        else{
            check = false;
            break;
        } 
      }

    if(check) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}