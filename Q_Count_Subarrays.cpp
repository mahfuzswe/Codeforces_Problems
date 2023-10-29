#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int counter = 0;
        int x = 0;

        // int* arr = new int[n];
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i]<arr[i-1]){
                counter += ((i-x)*((i-x)+1))/2;
                x = i;
            }
        }

        counter += ((n-x)*((n-x)+1))/2;
        cout<<counter<<'\n';
    }

    return 0;
}