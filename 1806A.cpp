#include<bits/stdc++.h>
using namespace std;


int main(){

    int t; cin>>t;
    while(t--){
        long long a,b,c,d; cin>>a>>b>>c>>d;

        if(d<b){
            cout<<-1<<endl;
            break;
        } 

        else{
            long long temp1,temp2,temp3,ans;
            temp1 = (a+d-b);

            if(temp1 < c){
                cout<<-1<<endl;
                break;
            } 
            temp2 = (d-b);
            temp3 = temp1-c;

            ans = temp2 + abs(temp3);
            cout<<ans<<endl;
        } 
    }
    
    return 0;
}

