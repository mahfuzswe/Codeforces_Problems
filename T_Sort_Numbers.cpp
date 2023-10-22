#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    int tmp[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
        tmp[i] = arr[i];
    } 

    sort(arr, arr+3);

    for(int i=0; i<3; i++){
        cout<<arr[i]<<'\n';
    }

    cout<<'\n';

    for(int i=0; i<3; i++){
        cout<<tmp[i]<<'\n';
    }

    return 0;
}