#include<bits/stdc++.h>
using namespace std;

int main(){
    int y, w; cin>>y>>w;
    int i = max(y,w);

    int cnt = 0;
    for(int j=i; j<=6; j++){
        cnt++;
    }

    if(cnt == 0){
        cout << 0 << "/" << 1 << '\n';
    }
    if(cnt == 1){
        cout << 1 << "/" << 6 << '\n';
    }
    if(cnt == 2){
        cout << 1 << "/" << 3 << '\n';
    }
    if(cnt == 3){
        cout << 1 << "/" << 2 << '\n';
    }
    if(cnt == 4){
        cout << 2 << "/" << 3 << '\n';
    }
    if(cnt == 5){
        cout << 5 << "/" << 6 << '\n';
    }
    if(cnt == 6){
        cout << 1 << "/" << 1 << '\n';
    }


    return 0;
}
