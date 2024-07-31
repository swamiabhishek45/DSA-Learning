#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0111100;
    int cnt = 0;
    while(n != 0){
        if(n&1){
            cnt++;
        }

        n = n >> 1;
    }

    cout << cnt;
    return 0;
}