#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
//jkl
    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lasttOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main()
{
    int arr[7] = {1, 2, 3,3,3, 4, 5};

   
    cout<<"first Occurence is " <<firstOcc(arr,7, 3)<<endl;;
    cout<<"Last Occurence is " <<lasttOcc(arr,7, 3);
    return 0;
}