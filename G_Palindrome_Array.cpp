#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int arr[], int n){
    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n-1-i]) return false;
    }
    return true;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    if(isPalindrome(arr, n)) cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}