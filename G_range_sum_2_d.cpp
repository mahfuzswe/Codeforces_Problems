#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int row, column, query;
    cin>>row>>column>>query;

    int arr[row][column];
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>>arr[i][j];
        }
    }

    int per[row][column];
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            per[i][j] = arr[i][j];
            if(j>0) per[i][j] += per[i][j-1];
            if(i>0) per[i][j] += per[i-1][j];
            if(i>0 && j>0) per[i][j] -= per[i-1][j-1];
        }
    }

    while(query--){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        x1--; y1--; x2--; y2--;

        int ans = per[x2][y2];
        if(y1>0) ans -= per[x2][y1-1];
        if(x1>0) ans -= per[x1-1][y2];
        if(x1>0 && y1>0) ans += per[x1-1][y1-1];

        cout<<ans<<'\n';
    }

    return 0;
}


