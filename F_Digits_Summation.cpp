#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b; cin>>a>>b;
    int a_siz = a.size();
    int b_siz = b.size();

    int op1 = a[a_siz-1] - '0';
    int op2 = b[b_siz-1] - '0';

    cout<<op1+op2<<'\n';

    return 0;
}