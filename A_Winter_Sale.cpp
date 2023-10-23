// original price = price after the discount / (1 - discount percentage)

#include<bits/stdc++.h>
using namespace std;

int main(){
    double x,p; cin>>x>>p;
    x = x/100;
    double op = p/(1-x);

    cout<<fixed<<setprecision(2)<<op<<'\n';

    return 0;
}