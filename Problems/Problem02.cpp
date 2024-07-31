#include<iostream>
#include<math.h>
using namespace std;

// reverse number

int main()
{
    int n;
    cin>> n;
    int ans = 0;
    while(n!=0){
        int digit = n % 10;
        ans = (ans * 10) + digit;

        n = n/10;
       
    }
    cout<<ans;
    return 0;
}