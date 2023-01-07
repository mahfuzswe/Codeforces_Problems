#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll i,j,k;
    ll n; cin>>n;
    ll a[n];

    for(i=0;i<n;i++) cin>>a[i];

    ll count=1,max=1;
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            count++;
        else
        {
            if(count>max)
                max=count;
                count=1;
            }
        }
        if(count>max) max=count;
        cout<<max<<endl;

    return 0;
}










