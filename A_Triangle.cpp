#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int>v(4);
    for(int i = 0; i < 4; ++i) cin >> v[i];

    sort(v.begin(), v.end());

    if(v[0] + v[1] > v[2] or v[1] + v[2] > v[3]) cout << "TRIANGLE\n";
    else if(v[0] + v[1] >= v[2] or v[1] + v[2] >= v[3]) cout << "SEGMENT\n";
    else cout << "IMPOSSIBLE\n";

    return 0;
}