#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b; cin>>a>>b;
    double div = a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(div)<<'\n';
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(div)<<'\n';
    cout<<"round "<<a<<" / "<<b<<" = "<<round(div)<<'\n';

    return 0;
}