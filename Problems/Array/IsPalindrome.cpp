#include<iostream>
using namespace std;

bool checkPalindrome(int *arr, int size){

    int i = 0;
    int j = size-1;
    while (i < j) {

        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }

}

int main()
{
    int arr[5] = {1,1,3,7,1};
    if(checkPalindrome(arr, 5)){
        cout<<"Yes";
    }
    else{
        cout<< "No";
    }
    return 0;

}