#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string mystr = "hello";

    int y = 0;
    int counter = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] == mystr[y]){
            counter++;
            y++;
        }
    }

    if(counter==5) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

