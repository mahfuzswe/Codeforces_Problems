#include<bits/stdc++.h>
using namespace std;

int main(){
    int yr; cin >> yr;
    for(int i = yr+1; i<=9000; i++){
        set<int>s;

        int ans = i;

        int four = i%10;
        s.insert(four);
        i /= 10;

        int three = i%10;
        s.insert(three);
        i /= 10;

        int second = i%10;
        s.insert(second);
        i /= 10;

        int first = i;
        s.insert(first);

        if(s.size() == 4){
            cout << ans << '\n';
            break; 
        }

    }

    return 0;
}