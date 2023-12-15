#include<bits/stdc++.h>
using namespace std;


int main(){
    string s; cin >> s;
    int n = s.size();

    vector<char>arr;
    for(int i=0; i<n; i++){
        if(s[i] == '+'){
            continue;
        }else{
            arr.push_back(s[i]);
        }
    }

    int nn = arr.size();

    sort(arr.begin(), arr.end());

    if(nn == 1) cout << arr[0] << '\n';
    else{
        for(int i=0; i<nn-1; i++){
            cout << arr[i];
            cout << '+'; 
        }
        cout << arr[nn-1] << '\n';
    }

    return 0;
}
