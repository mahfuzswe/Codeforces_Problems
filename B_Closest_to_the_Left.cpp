#include<bits/stdc++.h>
using namespace std;

int binarySearch(int n, int arr[], int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] <= key) start = mid + 1;
        else end = mid-1;
    }
    return start;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q; cin >> n >> q;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while(q--){
        int x; cin >> x;
        cout << binarySearch(n, arr, x) << '\n';
    }

    return 0;
}