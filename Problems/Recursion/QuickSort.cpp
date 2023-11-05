#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{

    int pivot = arr[s];
    int count = 0;

    for (int i = s + 1; i <= e; i++)
    {
        if (pivot >= arr[i])
        {
            count++;
        }
    }

    // place pivot at right position
    int pivotInd = s + count;
    swap(arr[pivotInd], arr[s]);

    // left and right part's elem exchanges
    int i = s;
    int j = e;

    while (i < pivotInd && j > pivotInd)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotInd && j > pivotInd)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotInd;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition
    int p = partition(arr, s, e);

    // R. R.
    quickSort(arr, s, p - 1);

    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {3, 1, 4, 5, 2};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}