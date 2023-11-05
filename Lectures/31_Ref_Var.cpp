#include<iostream>
using namespace std;

int update(int m){
   m++;
}

int getSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    // int i = 5;
    // int &j = i;

    // cout << i << endl;
    // cout << j << endl;

    // i++;
    // cout << j << endl;
    
    // j++;
    // cout << j << endl;

    // *******************
    // int  n = 5;
    // int *p = &n;
    // cout << "Before " << n << endl;
    
    // update(n);
    // cout << "After " << n << endl;

    // *******************
    int n;
    cin >> n;

    // variable size array
    int* arr = new int[n];

    // taking input in array
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << ans;

    return 0;
}