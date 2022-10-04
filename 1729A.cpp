#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,x,y;
        cin>>a>>b>>c;
        x=a-1;
        if(c<b)y=b-1;
        else {
            y=c-b+c-1;
        }
        if(x<y)cout<<"1\n";
        else if(x>y)cout<<"2\n";
        else cout<<"3\n";
    }
    return 0;
}
