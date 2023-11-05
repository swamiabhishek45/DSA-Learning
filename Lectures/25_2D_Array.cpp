#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for(int i =0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

void printSum(int arr[][4], int row, int col){

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " "<<endl;
    }
    
}

int largestRowSum(int arr[][4], int n, int m){

    int maxi = INT16_MIN;
    int rowIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
      
      if(sum > maxi){
        maxi = sum;
        rowIndex = i;
      }
    }

    cout<<"Largest sum: "<<maxi<<endl;
    return rowIndex;
}

int main()
{
    // create 2D array
    int arr[3][4];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222},{3,33,333,3333}};

    // taking input - row wise
    cout << "Enter array elements: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking input - column wise
/*    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
    }
*/
    // print array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 cout << endl;
    // Find target element
/*    cout << "Enter target element: ";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found!!" << endl;
    }
    else
    {
        cout << "Element not found!!" << endl;
    }
*/
    // sum of rows
    printSum(arr, 3, 4);

    int ans = largestRowSum(arr,3,4);
    cout<<"Max sum at row index: " <<ans<<endl;
    return 0;
}