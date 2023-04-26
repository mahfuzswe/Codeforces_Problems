#include<bits/stdc++.h>
using namespace std;


int main(){

    int q; cin>>q;
    while(q--){
       int n,t; cin>>n>>t;
       int vd[n];
       for(int i=0; i<n; i++){
            cin>>vd[i];
       }
       int ev[n];
       for(int i=0; i<n; i++){
            cin>>ev[i];
       }

       for(int i=0; i<n; i++){
            int
            if((vd[i]+i)<t){
                int v = (t-(vd[i]+i))*abs(ev[i]-vd[i]);
                cout<<v<<" ";
            }

            //cout<<vd[i]<<" ";
       }


    }


    return 0;
}


