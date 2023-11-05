#include <iostream>
using namespace std;

int factorial(int n)
{

    // base case
    if (n == 0)
        return 1;

    // int choti = factorial(n - 1);
    // int badi = n * choti;
    // return badi;

    return n * factorial(n - 1);
}

int power(int n)
{

    if (n == 0)
        return 1;

    return 2 * power(n - 1);
}

void count(int n)
{

    if (n == 0)
        return;

    cout << n << " ";
    count(n - 1);
}

int main()
{
    int n;
    cin >> n;

    // cout << factorial(n) ;

    // cout << power(n);

    count(n);

    return 0;
}