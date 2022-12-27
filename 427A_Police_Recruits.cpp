#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, e; cin >> n;
    int p = 0, c = 0;
    
    while(n--){
        cin >> e;
        if(e == -1)
        {
            if(p > 0)
                p--;
            else
                c++;
        }
        else
            p += e;
    }

    cout << c << endl;

    return 0;
}

