#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int year = n/365;
    int tmp1 = n%365;
    int month = tmp1/30;
    int day = tmp1%30;

    cout<<year<<" years\n";
    cout<<month<<" months\n";
    cout<<day<<" days\n";

    return 0;
}