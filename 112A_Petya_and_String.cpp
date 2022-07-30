#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string a, b;
    int i;
    cin >> a >> b;
    for (i = 0; i < a.size(); i++)
    {
        a[i] = towlower(a[i]); // converting uppercase to lowercase
        b[i] = towlower(b[i]);
    }
    if (a == b)
    {
        cout << "0" << endl;
    }
    else
    {
        for (i = 0; i < a.size(); i++) // size of two strings are same so we can use one
        {
            if (a[i] < b[i])
            {
                cout << "-1" << endl;
                break;
            }
            if (a[i] > b[i])
            {
                cout << "1" << endl;
                break;
            }
        }
    }

    return 0;
}