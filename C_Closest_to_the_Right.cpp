#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int  n, int target){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high) / 2;

        // maybe an answer
        if(arr[mid] >= target){
            ans = mid;

            //look for more small index on left
            high = mid - 1;
        }
        else{
            low = mid + 1; // look for right
        }
    }
    return ans+1;
}

int main(){
    int n, q; cin>>n>>q;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    while(q--){
        int target; cin>>target;
        cout<<lowerBound(arr, n, target)<<'\n';
    }

    return 0;
}