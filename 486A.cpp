#include <iostream>
using namespace std;

//(n/2)-(n*(n%2));

int main()
{
    long long a, n;

    cin >> n;
    // if (n % 2 == 0)
    // {
    //     a = n / 2;
    // }
    // else
    // {
    //     a = ((n + 1) / 2) * (-1);
    // }

    a = (n / 2) - (n * (n % 2));
    cout << a;

    return 0;
}