#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;  // Maximum size of the array
    int arr[maxSize];         // Declare an integer array
    int n;                    // Number of elements in the array

    // Input the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Remove even numbers and store in the same array
    int newSize = 0; // New size of the array
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            arr[newSize] = arr[i]; // Store odd number in the same array
            newSize++;
        }
    }

    // Output the updated array
    cout << "Array after removing even numbers:" << endl;
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
