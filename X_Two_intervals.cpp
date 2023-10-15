#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int low, up;

    if(r1<l2 || l2> r1) cout<<"-1\n";
    else if(l2>l1 && r2>r1){
        low = l2;
        up = r1;
        cout<<low<<" "<<up<<'\n';
    } 
    else if(l1==l2 && r1==r2){
        low = l1;
        up = r1;
        cout<<low<<" "<<up<<'\n';
    }
    else if(l1>l2 && r1>r2){
        low = l1;
        up = r2;
        cout<<low<<" "<<up<<'\n';
    }
    else if(l2>l1 && r1>r2){
        low = l2;
        up = r2;
        cout<<low<<" "<<up<<'\n';
    }
    else if(l1>l2 && r2>r1){
        low = l1;
        up = r1;
        cout<<low<<" "<<up<<'\n';
    }


    return 0;
}
