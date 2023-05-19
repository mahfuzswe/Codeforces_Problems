#include<bits/stdc++.h>
using namespace std;


int main(){

    int q; cin>>q;

    while(q--){
        int sum = 0;
        int n; cin>>n;
        int l;
        for(int i=0; i<n; i++){
            cin>>l;
            sum += l;
        }
        if(sum<n) cout<<"1\n";
        else cout<<sum-n<<endl;

    }

    return 0;
}



