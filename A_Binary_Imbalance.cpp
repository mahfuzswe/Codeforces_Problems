#include<bits/stdc++.h>
using namespace std;

int linearSearch(char arr[], int n, char target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        char target = '0';

        if(linearSearch(arr,n,target) != -1) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}