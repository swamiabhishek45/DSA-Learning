#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;

    for(int i = 0; i < size; i++){
        cout << arr[i]<< " ";
    }

    cout<<endl<<"Printing DONE"<<endl;

}

int main()
{
    int first[10] = {1,2,3,4,5};
    int n = 10  ;
    
    printArray(first, 10);

    int firstSize = sizeof(first)/sizeof(int);
    cout<<"Size of First: "<<firstSize<<endl;

    char ch[5] = {'A','B'};
    cout<<ch[1];
    return 0;
} 