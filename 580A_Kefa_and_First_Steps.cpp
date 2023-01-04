#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll n ; cin>>n;
    
    int arr[228228];
    for(int i=0; i<n; i++) cin>>arr[i];

    ll o; ll k =1;
    for(int i=1; i<n; i++){
        if(arr[i]>=arr[i-1]) k++;
        else o=max(o,k),k=1;
	  o=max(o,k);
    }
	cout<<o;
       
    return 0;
}

