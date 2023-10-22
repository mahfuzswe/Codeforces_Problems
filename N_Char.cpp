#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch; cin>>ch;

    if(ch>=65 && ch<= 90){
        ch = ch+32;
    }else{
        ch= ch-32;
    }
    cout<<ch<<'\n';

    return 0;
}