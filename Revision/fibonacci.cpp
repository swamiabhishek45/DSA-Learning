#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;

    int a = 0;
    cout << a << " ";

    int b = 1;
    cout << b << " ";

    for (int i = 1; i <= n; i++)
    {
        int nextSum = a + b;
        cout << nextSum << " ";

        a = b;
        b = nextSum;
    }
    return 0;
}