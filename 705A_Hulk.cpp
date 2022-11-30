#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    for(int i=0; i<n; i++){
        if(i%2==0) cout<<"I hate ";
        else cout<<"I love ";

        if(i != n-1) cout<<"that ";
        else cout<<"it "<<endl;
    }
    
    return 0;
}

