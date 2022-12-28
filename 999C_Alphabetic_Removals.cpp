#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i; cin>>n>>k;
    char str[400001]; cin>>str;
    
    char x;

    for (x='a'; x<='z'; x++)
    {
        if (k == 0)
            break;

        for (i=0; i<n; i++)
        {
            if (k == 0)
                break;

            if (str[i] == x)
            {
                str[i] = ' ';
                --k;
            }
        }
    }

    for (i=0; i<n; i++)
    {
        if (isspace(str[i]))
            continue;

        cout<<str[i];
    }
    cout<<endl;
    
    return 0;
}

