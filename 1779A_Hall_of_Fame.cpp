#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        for(int i=1; i<=n; i++){
            if(s[i]!=s[i-1]){
                if(s[i]=='R'){
                  cout<<i<<endl;
                  return 0;
                }else{
                  cout<<'0'<<endl;
                  return 0;
                } 
            
            }
        }
        cout<<-1<<endl;
        return 0;
    }
    
    return 0;
}


