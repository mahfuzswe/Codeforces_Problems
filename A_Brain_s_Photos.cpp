#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;

    char arr[row][col];

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cin >> arr[i][j];
        }
    }

    if(arr[row][col] == 'B' || arr[row][col] == 'W'){
        cout << "#Black&White\n";
    }
    else cout << "#Color\n";

    return 0;
}