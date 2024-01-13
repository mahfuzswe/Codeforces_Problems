#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";

    char d; cin >> d;
    string w; cin >> w;

    if(d == 'R'){
        for(int i=0; i<s1.size(); i++){
            if(w[i] == s1[i]) cout << s1[i-1];
        }
        for(int i=0; i<s2.size(); i++){
            if(w[i] == s3[i]) cout << s1[i-1];
        }
        for(int i=0; i<s3.size(); i++){
            if(w[i] == s3[i]) cout << s1[i-1];
        }
    }

    return 0;
}