#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    int p,q;        
    int cnt=0;
    while(n--){
        cin>>p>>q;

        if((p+1)<q) cnt++;

    }
    cout<<cnt<<endl;
    
    return 0;
}

