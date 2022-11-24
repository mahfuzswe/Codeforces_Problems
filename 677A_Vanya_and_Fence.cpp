#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int p,h,a,sum=0;
    cin>>p>>h;

    for(int i=0; i<p; i++){
        cin>>a;
        if(a>h){
            sum++;
        }
        sum++;
    }  
    cout<<sum<<endl;
    
    return 0;
}

