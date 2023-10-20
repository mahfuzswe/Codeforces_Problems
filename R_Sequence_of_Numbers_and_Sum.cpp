#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(n>0 && m>0){
        int sum = 0;
        if(n < m){
            for(int i=n; i<=m; i++){
                sum += i;
            }
        }else{
            for(int i=m; i<=n; i++){
                sum += i;
            }
        }

        
    }

    return 0;
}