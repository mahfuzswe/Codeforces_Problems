#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n; cin>>n;
    int arr[n];

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    int pg = 0; //1
    int m = 0;  //2
    int pe = 0; //3

    for(int i=1; i<=n; i++){
        if(arr[i] == 1) pg++;
        else if(arr[i] == 2) m++;
        else pe++;
    }

    vector<int>v;

    if(pg!=0 && m!=0 && pe!=0){
        for(int i=1; i<=n; i++){
            if(arr[i] == 3){
                // v.push_back(arr[i]);
                cout << i << " ";
                pe--;
            }
            if(arr[i] == 2){
                // v.push_back(arr[i]);
                cout << i << " ";
                m--;
            }
            if(arr[i] == 1){
                // v.push_back(arr[i]);
                cout << i << " ";
                pg--;
            }
        }
    }

    int w = v.size() / 3;

    // if(w==0) cout << 0 << '\n';
    // else{
    //     for(int i=1; i<=v.size(); i++){
    //         cout << i << " ";
    //     }
    //     cout << '\n';
    // }

    return 0;
}