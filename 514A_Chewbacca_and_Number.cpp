#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string s; cin>>s;
    
    int i=0; 
    if(s[i]=='9') ++i;

    while(i<s.length()){
        if(s[i] >= '5') s[i] = ('9'-s[i]) + '0';
        ++i;
    }
    cout<<s<<endl;

    return 0;
}



