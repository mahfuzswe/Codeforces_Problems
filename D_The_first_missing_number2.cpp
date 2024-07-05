// Journey of thousand miles starts with
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 7;

int cnt[200005];

// what to think | how to think | don't be stupid
signed main(){
    int n, m; cin >> n >> m;
    int i, j;
    for(i = 0; i < n; ++i){
        cin >> j;
        j += m;
        cnt[j]++;
    }

    for(i = 0; i <=2*m; ++i){
        if(!cnt[i]){
            cout << i - m << '\n';
            break;
        }
    }

    return 0;
}


/*
    The code first reads two integers n and m from the input. n is the number of integers in the sequence,
    and m is an offset that is added to each number to ensure all numbers are positive.

    The first for loop reads n integers from the input. For each integer, it adds m to the integer 
    to ensure it's positive, and then increments the count of that integer in the cnt array.

    The second for loop iterates from 0 to 2*m. For each i, it checks if cnt[i] is 0, which means that 
    the number i - m is missing from the sequence. If it finds such an i, it prints i - m and breaks the loop.

    if the input sequence is 1, 2, 4 with m = 3, the code will output 0, 
    which is the first missing number in the sequence when considering both positive and negative numbers.
*/