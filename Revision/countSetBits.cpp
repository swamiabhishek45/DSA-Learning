#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 987654;
    int rev = 0;
    while(n != 0){
        int digit = n % 10;

        rev = (rev * 10) + digit;

        n /= 10;
    }

    cout << rev;
    return 0;
}