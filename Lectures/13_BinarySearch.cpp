#include <iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
  

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            // Goes to Right>>
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            // Goes to Left<<
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

   
    cout<<"Element found at Index " <<search(arr,5, 5);
    return 0;
}