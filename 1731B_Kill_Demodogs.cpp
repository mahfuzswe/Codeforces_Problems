#include<bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main(){
    
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;
    
        cout<<ans<<endl;
    }
 
 return 0;
}