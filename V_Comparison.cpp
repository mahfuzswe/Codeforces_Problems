#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,c;
    char b; cin>>a>>b>>c;

    if(b=='>'){
        if(a>c) cout<<"Right\n"<<'\n';
        else cout<<"Wrong\n";
    }

    if(b=='<'){
        if(a<c) cout<<"Right\n";
        else cout<<"Wrong\n";
    }

    if(b=='='){
        if(a==c) cout<<"Right\n";
        else cout<<"Wrong\n";
    }

    return 0;
}