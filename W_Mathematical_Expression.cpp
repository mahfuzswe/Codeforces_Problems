#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    char op, eq;

    cin>>a>>op>>b>>eq>>c;

    if(op=='+'){
        if((a+b)==c) cout<<"Yes\n";
        else cout<<a+b<<'\n';
    }

    if(op=='-'){
        if((a-b)==c) cout<<"Yes\n";
        else cout<<a-b<<'\n';
    }

    if(op=='*'){
        if((a*b)==c) cout<<"Yes\n";
        else cout<<a*b<<'\n';
    }

    return 0;
}