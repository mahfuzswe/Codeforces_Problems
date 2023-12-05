#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int x = n/3;
        int y = n%3;

        int c1 = x;
        int c2 = x;

        if(y==1) c1++;
        if(y==2) c2++;

        cout<<c1<<" "<<c2<<'\n';
    }

    return 0;
}