#include<bits/stdc++.h>
using namespace std;


int main(){

    int n; cin >> n;
    if(n==1) cout << "I hate it\n";
    else{
        for(int i=1; i<n; i++){
            if(i%2 !=0 ) cout << "I hate ";
            else cout << "I love ";
            cout << "that ";
        }
        if(n%2!=0) cout << "I hate it\n";
        else cout << "I love it\n";
    }
    


    return 0;
}