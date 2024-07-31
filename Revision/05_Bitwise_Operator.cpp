#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << (2 ^ 4);
    
    // Left shift --> multiply by 2
    cout << (1 << 3) << endl; // 68
    cout << (4 << 3) << endl; // 32

    // Right shift --> divide by 2
    cout << (14 >> 2) << endl; // 3
    cout << (23 >> 2) << endl; // 5

    return 0;
}