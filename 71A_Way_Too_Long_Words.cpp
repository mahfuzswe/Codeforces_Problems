#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> s;            // taking input
        if (s.length() > 10) // chcek length is either 10 or not
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl; // we get the last digit by substract 1 from length
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}