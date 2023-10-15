#include<bits/stdc++.h>
using namespace std;


int main(){
    int a; cin>>a;
    char c; cin>>c;
    int b; cin>>b;

    if(c=='+') cout<<a+b<<'\n';
    else if(c=='-') cout<<a-b<<'\n';
    else if(c=='*') cout<<a*b<<'\n';
    else if(c=='/') cout<<a/b<<'\n';

    return 0;
}