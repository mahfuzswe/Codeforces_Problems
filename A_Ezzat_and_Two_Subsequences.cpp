#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n]; 

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);

        double sum = 0;
        for(int i=0; i<n-1; i++){
            sum += arr[i];
        }
        
        double tmp = (double)(sum/(n-1));

        double ans = (double) tmp + arr[n-1];

        cout << setprecision(9) << fixed << ans << '\n';

    }

    return 0;
}