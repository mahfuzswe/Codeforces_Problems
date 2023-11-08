#include<bits/stdc++.h>
using namespace std;
#define int long long

int arr[100005] = {0};

int32_t main(){
    int size, quries;
    cin>>size>>quries;

    vector<int>v;
    for(int i=0; i<size; i++){
        int num; cin>>num;
        v.push_back(num);
    }

    while(quries--){
        int start, end, add;
        cin>>start>>end>>add;
        arr[start-1] += add;
        arr[end] -= add;
    }

    // Prefix Sum Calculation
    for(int i=1; i<size; i++){
        arr[i] += arr[i-1];
    }

    // Output Updated Array
    for(int i=0; i<size; i++){
        cout<<v[i] + arr[i] << " "; 
    }

    return 0;
}
