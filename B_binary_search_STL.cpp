/*
    lower_bound x: mean find first element greater than or equal x,
    if not found print -1.

    upper_bound x: mean find first element greater than x,
    if not found print -1.

    binary_search x: mean find x in the array or not.
    if x in array print "found" otherwise print "not found".
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin>>n>>q;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    string s;
    int x;
    while(q--){
        cin>>s>>x;
        if(s=="binary_search"){
            if(binary_search(arr.begin(), arr.end(), x)) cout << "found\n";
            else cout << "not found\n";
        }
        if(s=="lower_bound"){
            auto it = lower_bound(arr.begin(), arr.end(), x);
            if(it == arr.end()) cout << -1 <<'\n';
            else cout << *it << '\n';
        }
        if(s=="upper_bound"){
            auto it = upper_bound(arr.begin(), arr.end(), x);
            if(it == arr.end()) cout << -1 <<'\n';
            else cout << *it << '\n';
        }
    }

    return 0;
}

