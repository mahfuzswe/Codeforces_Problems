#include<bits/stdc++.h>
using namespace std;

int main(){
    int q; cin>>q;
    string s; cin>>s;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int size = s.size();
    int z = 0;
    if(q==1){
        for(int i=0; i<size; i++){
            for(z=0; z<original.size(); z++){
                if(s[i]==original[z]){
                    break;
                }
            }
            cout<<key[z];
        }
    }
    else{
        for(int i=0; i<size; i++){
            for(z=0; z<key.size(); z++){
                if(s[i]==key[z]){
                    break;
                }
            }
            cout<<original[z];
        }
    }

    return 0;
}