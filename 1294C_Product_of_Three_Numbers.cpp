#include<bits/stdc++.h>
using namespace std;


int main(){
    
    int n; cin>>n;

    int a = 1, b = 1, c = 1;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            a = i;
            break;
        }
    } 

    n = n/a;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){

            if(i != a){
                b = min(b,i);
            }
            if((n/i) != i){
                if((n/i) != a){
                    b = min(b,n/i);
                }
            }
        } 
    }
    
    c = n / b;

    if(a!=b && b!=c && c!=1){
        cout<<"Yes\n";
        cout<<a<<" "<<b<<" "<<c<<endl;
    }else{
        cout<<"No\n";
    }
    
    return 0;
}

