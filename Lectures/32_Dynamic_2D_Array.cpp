#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    // Creating 2-D Array in heap memory
    int** arr = new int* [n];

    for(int i =0; i<n;i++){
        arr[i] = new int[n];
    }

    // taking input for 2-D Array
    for(int i = 0; i< n ;i++){
        for(int j = 0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    // printing input for 2-D Array
    for(int i = 0; i< n ;i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j]<<" ";
        }cout<<endl;
    }

    // releasing memory
      for(int i =0; i<n;i++){
        delete [] arr[i];
    }

    delete []arr;
    return 0;
}