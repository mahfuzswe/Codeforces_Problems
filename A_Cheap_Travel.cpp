#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int s1 = n * a;

    int x = n / m;
    int y = n % m;

    int s2 = 0;
    if(y == 0){
        s2 = x*b;
    }else{
        s2 = (x*b) + (y*a);  
    }    

    int ans = min(s1, s2);

    cout << ans << '\n';


    return 0;
}