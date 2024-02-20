#include<bits/stdc++.h>
using namespace std;

int arr[200001] = {0};

int main(){
    int t; cin >> t;
    
    for(int i=1; i<=200000; i++){
        int a = i;
        while(a){
            arr[i] += (a%10);
            a /= 10;
        }
        arr[i] += arr[i-1];
    }

    while(t--){
        int n; cin >> n;
        cout << arr[n] << '\n';    
    }


    return 0;
}