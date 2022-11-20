#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin>>x;
    int step = x/5;
    if(x%5>0) step++;
    cout<<step<<endl;

    return 0;
}



















// #include <iostream>
// using namespace std;
// int a, pas;
// int main() {
//     cin >> a;
//     pas = a / 5;
//     if (a % 5 > 0) {
//         pas++;
//     }
//     cout << pas;
// }