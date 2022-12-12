#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; scanf("%d",&n);

    while (n--)
    {
        int a,b; cin>>a>>b;
        if(a%b==0) cout<<'0'<<endl;
        else {
            int ans = a%b;
            cout<<b-ans<<endl;
    }
    
}
    return 0;
}
