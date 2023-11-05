#include<iostream>
using namespace std;

int getSum(int *arr, int size){

    if(size == 0){
        return 0;
    }

    if( size == 1){
        return arr[0];
    }

    int sum = arr[0] + getSum(arr+1, size - 1);
    return sum;
}

int main()
{
    int arr[5] = {2,4,3,6,1};

    int sum = getSum(arr, 5);

    cout << "Sum is " << sum;
    return 0;
}