#include <iostream>
using namespace std;

void swapArray(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
            // i = i + 1;
        }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{ 
    int arr[6] = {1, 2, 1, 2, 1, 2};
    int brr[5] = {1, 2, 3, 4, 5};

    swapArray(arr, 6);
    swapArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}