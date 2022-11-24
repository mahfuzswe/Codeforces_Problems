#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin>>t;
    int n,i;
    string s[100];
    
    while(t--){
        cin>>n;
        for(i=0; i<n; i++){
            cin>>s[i];

            //cout<<s[i].length()<<endl;
            //cout<<s[i]<<endl;
            //cout<<s[i].back()<<endl;

            sort(s[i].begin(),s[i].end());
            int diff = (s[i].back()-'a')+1;
            cout<<abs(diff)<<endl;
            break;
        }
        
    }
    
    return 0;
}

