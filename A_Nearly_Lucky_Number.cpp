#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;

    int siz1 = s.size();
    
    int a, b; // a00b
    int cnt4 = 0;
    int cnt7 = 0;

    for(int i=0; i<s.size();){
        if(s[i] == '0'){
            a = i;
            s.erase(i, 1);
        }
        else{
            i++;
        }
    }

    int siz2 = s.size();

    for(int i=0; i<s.size(); i++){
        if(s[i] == '4') cnt4++;
        if(s[i] == '7') cnt7++;
    }


    if(siz1 == siz2){
        if(cnt4 >= 1 && cnt7 >=1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    else{
        if(cnt4 >= 1 && cnt7 >=1 && (s[a] == '4' || s[a] == '7') && (s[a] != s[a-1])){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}