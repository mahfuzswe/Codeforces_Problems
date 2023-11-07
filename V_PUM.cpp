#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int start = 1;
    for(int i =0; i<n; i++){
        for(int j=0; j<3; j++){
            if(j==0) cout<<start;
            else{
                cout<<" "<<start;
            }
            start++;
        }
        cout<<" PUM\n";
        start++;
    }

    return 0;
}
