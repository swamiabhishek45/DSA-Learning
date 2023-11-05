#include<iostream>
using namespace std;

int main()
{
    int x = 1234;

    int ans = 0;

    while(x != 0){
        int digit = x % 10;

        if((ans > INT16_MAX/10) || (ans < INT16_MIN/10)){
            return false;
        }
        ans = (ans * 10) + digit;

        x = x/10;

    }

    cout<<ans;
    return 0;
}