#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int t = 1;
        for(int i = 0; i < n; i++)
        {
            while(t * 2 <= a[i])
            {
                t *= 2;
            }
            while(t > a[i])
            {
                t /= 2;
            }
            cout << t << " ";
        }
        cout << "\n";
    }

    return 0;
}