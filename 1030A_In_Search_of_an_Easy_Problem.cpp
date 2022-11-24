#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n,i; cin>>n;

    while(n>0){
        cin>>i;
        if(i==1){
            cout<<"HARD\n";
            return 0;
        }
        n--;
    }
    cout<<"EASY\n";
    
    return 0;
}

