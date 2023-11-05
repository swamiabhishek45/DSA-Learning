#include<iostream>
using namespace std;

int print(int *p){
    
    cout<< p << endl;
    cout<< *p << endl;
}

void update (int *p){

    // p = p + 1; // not update address
    // cout<< "In function " << p<<endl;

    *p += 1; // update value
}

int getSum(int arr[], int n){
    int sum = 0;
    for(int i =0; i<n ; i++){
        // sum += arr[i]; 
        sum += i[arr];
    }
    return sum;
}

int main()
{
    // int value = 5;
    // int *p = &value;

    // // print(p);

    // cout << "Before " << *p << endl;
    // update(p);
    // cout << "After " << *p << endl;

    // int arr[5] = {1,2,3,4,5};
    // // int ans = getSum(arr+3, 5);
    // cout<< "Sum is " << getSum(arr, 5) <<endl;
    // cout<< "Sum of last three digit is " << getSum(arr+2, 3) <<endl;


    
    return 0;
}