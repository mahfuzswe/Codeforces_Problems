#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int t; cin>>t;
    while(t--){
        char n[50];
        cin >> n;
        
        for (int x=0; x<strlen(n); x++)
        putchar(toupper(n[x]));

        cout<<n<<endl;
    }
    
    
    return 0;
}

