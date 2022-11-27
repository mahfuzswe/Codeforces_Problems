#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    int cnt = 0;
    int a[100000];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]!=a[i+1]) cnt++;
    }

    cout<<cnt<<endl;
    
    
    return 0;
}

