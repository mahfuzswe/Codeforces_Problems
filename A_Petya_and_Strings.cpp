#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b; cin>>a>>b;
    for(int i=0; i<a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
    if(a==b) cout<<"0\n";
    else{
        for(int i=0; i<a.size(); i++){
            if(a[i]<b[i]){
                cout<<"-1\n";
                break;
            }
            if(a[i]>b[i]){
                cout<<"1\n";
                break;
            }
        }
    }

    return 0;
}
