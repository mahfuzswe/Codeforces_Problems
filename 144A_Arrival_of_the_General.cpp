#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    int mx = 0, mn = 101, mxi,mni;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx = arr[i];
            mxi = i;
        }
        if(arr[i]<=mn){
            mn = arr[i];
            mni = i;
        }
    }
    if(mxi>mni){
        mni++;
    }
    cout<<mxi+(n-1)-mni<<endl;

    return 0;
}


