#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;
    string s; cin>>s;
    int count = 0;
    for(int i=0; i<n; i++){
        s[i] = tolower(s[i]);
    }
    sort(s.begin(),s.end());
    for(int i = 0; i<n; i++ ){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if(count == 26) cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}

