#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int M = 0, B = 0;
        swap(arr[0],arr[n-1]);
    
            for(int i=0; i<n; i++){
                if(arr[i]%2!=0){
                    B+=arr[i];
                }else{
                    M+=arr[i];
                }
            }

            if(M>B){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
    }
    
    return 0;
}

