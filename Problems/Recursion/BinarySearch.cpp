#include <iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){

    // base case

    // element not found
    if(s>e)
        return false;

    int mid = s + (e - s)/2;

    // element found
    if(arr[mid] == k){
        return true;
    }

    // Recursive Call  
    if(arr[mid] < k){
       return binarySearch(arr, mid+1, e, k);
    }
    else{
       return binarySearch(arr, s, mid-1, k);

    }
}

int main()
{
    int arr[5] = {1, 3, 4, 7, 9};
    int size = 5;
    int key = 7;

    int sum = binarySearch(arr, 0, 5, key);

    if (sum)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }
    return 0;
}