#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    if(size == 0 || size == 1)
        return true;

    if(arr[0] > arr[1])
        return false;
    else
        isSorted(arr+1, size-1);
            
}

int main()
{
    int arr[5] = {2,3,6,7,9};

    int ans = isSorted(arr, 5);

    // cout << ans << " ";
    if(ans){
        cout << "Array is sorted";
    }
    else {
        cout << "Array is not sorted";
        
    }
    return 0;
}