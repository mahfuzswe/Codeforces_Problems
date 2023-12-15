#include<bits/stdc++.h>
using namespace std;

int main(){

    char arr[1000];
    int i=0;
    set<char>s;
    bool ck = true;
    while(ck){
        cin>>arr[i];
        if(arr[i] == '}'){
            ck = false;
        }else{
            if(arr[i] == '{' || arr[i] == ',' || arr[i] == ' ' || arr[i] == '}'){
            continue;
            }
            else{
                s.insert(arr[i]);
            }
            i++;
        } 
    }
    cout<<s.size()<<'\n';

    return 0;
}