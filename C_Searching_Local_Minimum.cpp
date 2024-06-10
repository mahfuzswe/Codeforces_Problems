#include<bits/stdc++.h>
using namespace std;

#define int long long

int n;
map<int, int> prev_values;

int query(int index){
    //(prev_values.find(index) != prev_values.end())
    if(prev_vlues.contains(index)){ // C++ 20
        //its return true if the index is inside the previous values
        return prev_vlues[index]
    }

    if(index == 0 || index == n+1){
        return INF;
    }

    cout << "? " << index << endl;
    int value; cin >> value;
    return prev_vlues[index] = value;
}

signed main(){
    cin >> n;
    
    // cout << "? " << 7 << endl; // output: ? index
    // int judge_value; cin >> judge_value;
    // // judge will give you a[index] 

    
    int value_at_index_1 = query(1);

    return 0;
}