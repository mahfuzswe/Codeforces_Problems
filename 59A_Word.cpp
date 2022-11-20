#include<bits/stdc++.h>
using namespace std;

int main(){

    string s; cin>>s;

    int cntup = 0, cntlow = 0;
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])) cntup++;
        else cntlow++;
    }
    if(cntup>cntlow){
        char ch;
        for(int i=0; i<s.size();i++){
            ch = toupper(s[i]);
            cout<<ch;
        }
    }
    else{
        char ch;
        for(int i=0; i<s.size();i++){
            ch = tolower(s[i]);
            cout<<ch;
        }
    }


    return 0;
}