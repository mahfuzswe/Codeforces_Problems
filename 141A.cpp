#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int arr[5];
    for(int i=0; i<4; i++){
        cin>>arr[i];
    }
    sort(arr, arr+4);
    int ans = 3;
    
    for(int i=0; i<3; i++){ 
        if(arr[i] != arr[i+1]){
            ans--;
        } 
    }
    cout<<ans<<'\n';

    return 0;
}
