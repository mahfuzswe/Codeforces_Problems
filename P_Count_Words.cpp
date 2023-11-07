#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);

    int counter = 1;
    for(int i=1; i<s.size(); i++){
        if(!(s[i]>='A' && s[i]<='z') && s[i+1]>='A' && s[i+1]<='z'){
            counter++;
        }
    }

    cout<<counter<<'\n';

    return 0;
}