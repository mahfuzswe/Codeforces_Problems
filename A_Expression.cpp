#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    int ss = INT_MIN;

    int ans1 = a+b*c;
    if(ans1 > ss) ss = ans1;

    int ans2 = a*(b+c);
    if(ans2 > ss) ss = ans2;

    int ans3 = a*b*c;
    if(ans3 > ss) ss = ans3;
    
    int ans4 = (a+b)*c;
    if(ans4 > ss) ss = ans4;

    int ans5 = a+b+c;
    if(ans5 > ss) ss = ans5;

    cout << ss << '\n';

    return 0;
}