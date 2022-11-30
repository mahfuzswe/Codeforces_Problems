#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int arr[5], s=3;
    for(int i=0; i<4; i++) cin>>arr[i];

    sort(arr,arr+4);
    for(int i=0; i<3; i++){
        if(arr[i]!=arr[i+1]) s--;
    }
    
    cout<<s<<endl;
    
    return 0;
}
