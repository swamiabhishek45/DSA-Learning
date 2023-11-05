#include<iostream>
using namespace std;

int print(int arr[], int size){
    cout << "Size of array " << size << endl;

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}


bool linearSearch(int *arr, int size, int key){

    print(arr,size);

    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        return linearSearch(arr+1, size-1,key); 
    }
}

int main()
{
    int arr[5] = {1,3,5,23,6};
    int size = 5;
    int key = 6;

    if(linearSearch(arr, size, key)){
        cout <<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}