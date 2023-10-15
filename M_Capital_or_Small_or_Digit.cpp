#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch; cin>>ch;
    int askii = ch;

    if(askii >= 65 && askii <= 96) cout<<"ALPHA\n"<<"IS CAPITAL\n";
    else if(askii >= 97 && askii <= 122) cout<<"ALPHA\n"<<"IS SMALL\n";
    else cout<<"IS DIGIT\n";

    return 0;
}