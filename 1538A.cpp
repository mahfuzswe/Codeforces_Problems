#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int mx = distance(arr,max_element(arr,arr+n))+1;
        int mn = distance(arr,min_element(arr,arr+n))+1;
        int mx_b = abs(distance(arr+n, max_element(arr,arr+n)));
        int mn_b = abs(distance(arr+n, min_element(arr,arr+n)));

        int mrr[4] = {mx, mn, mx_b, mn_b};
        int steps = 0;
        steps += *min_element(mrr, mrr+4);
        if(*min_element(mrr, mrr+4)==mx || *min_element(mrr,mrr+4)==mx_b){
            steps += min(min(abs(mn-mx), mn_b), min(mn, mn_b));
        }else{
            steps += min(min(abs(mx - mn),mx_b),min(mx,mx_b));
        }
        cout<<steps<<endl;
    }

    return 0;
}
