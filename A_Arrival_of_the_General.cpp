#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    vector<int>v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }

    int maxIndex = max_element(v.begin(), v.end()) - v.begin();
    int minIndex = min_element(v.begin(), v.end()) - v.begin();

    int cnt = maxIndex + (n - 1 - minIndex);

    if(minIndex < maxIndex) cnt--;

    cout << cnt << '\n';

    return 0;
}