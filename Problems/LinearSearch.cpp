#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i <size; i++)
    {

        if (arr[i] == key)
        {
            return 1;
        }

    }
        return 0;
}

int main()
{
    int arr[10] = {12, 45, 75, 44, 5, 8, 1, 0, 67, 24};

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    int found = search(arr, 10, key);

    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {

        cout << "Key is absent" << endl;
    }
    return 0;
}