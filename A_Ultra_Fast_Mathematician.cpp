#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    string s(a.size(), '0');

    for(int i=0; i<a.size(); i++){
        if(a[i] == '0' && b[i] == '0'){
            s[i] = '0';
        }
        if((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')){
            s[i] = '1';
        }
        if(a[i] == '1' && b[i] == '1'){
            s[i] = '0';
        }
    }

    cout << s << '\n';

    return 0;
}