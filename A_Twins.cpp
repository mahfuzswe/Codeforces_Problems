#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum = accumulate(v.begin(), v.end(), 0);
    int avg = sum/2;

    sort(v.begin(), v.end(), greater<int>());

    int dustu = 0, i = 0;
    int ans = 0;
    while(dustu <= avg){
        dustu += v[i];
        ans++;
        i++;
    }

    cout<<ans<<endl;

    return 0;
}