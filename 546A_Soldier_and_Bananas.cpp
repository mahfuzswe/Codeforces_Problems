#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w; cin>>k>>n>>w;
    int sum = 0;

    for(int i=1; i<=w; i++){
        sum += i;
    }
    int b = (sum*k)-n;
    if(b<0){
        cout<<"0\n";
    }else{
        cout<<b<<endl;
    }

    return 0;
}
