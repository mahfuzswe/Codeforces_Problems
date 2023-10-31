#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int q){
    int start = 0;
    int end = n;

    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==q) return 1;
        else if(arr[mid]>q) end = mid-1;
        else start = mid+1;
    }
    return 0;
}

int main(){
    int n,nq; cin>>n>>nq;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    sort(arr, arr+n);

    while(nq--){
        int q; cin>>q;
        if(binarySearch(arr,n,q)) cout<<"found\n";
        else cout<<"not found\n";
    }
    return 0;
}