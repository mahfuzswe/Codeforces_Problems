#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    int cnt = 0;
    int arr[n+1];

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        arr[x] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout << arr[i] <<" ";
    }
     
    return 0;
}

