#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++)
    {
        // cout<<"Enter array elements: ";
        cin >> num[i];
    }

    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + num[i];
    }
    cout<<"Sum of array elements is: "<<sum;
    return 0;
}