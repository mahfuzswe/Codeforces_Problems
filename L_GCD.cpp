#include<bits/stdc++.h>
using namespace std;

// Recursive Euclidean Algorithm
// int gcd(int a, int b){
//     if(b == 0){
//         return a;
//     }else{
//         return gcd(b, a%b);
//     }
// }

// Iterative Euclidean Algorithm
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main(){

    int a, b; cin >> a >> b;
    // cout << __gcd(a,b) << '\n';

    cout<<gcd(a,b)<<'\n';


    return 0;
}