#include <iostream>
using namespace std;

int main()
{
    // int num = 5;

    // cout<<num<<endl;

    // // address of operatoer -> &
    // cout<<"address of num is : "<<&num<<endl;

    // int *ptr = &num;

    // cout<<"Value is : "<< *ptr<<endl; // store value
    // cout<<"Address is : "<< ptr<<endl; // store address

    // cout<<"size of integer is: "<< sizeof(num)<<endl;
    // cout<<"Size of pointer is: "<< sizeof(ptr)<<endl; // size of pointer is actually 8

    // int *p = 0; // null memory -> segementation fault
    // p = &num;
    // cout<<*p<<endl;

    // int no = 9;
    // int a = no;
    // a++;
    // cout<<no<<endl; // 9
    // cout<<no++<<endl; // 9 -> first print then increase
    // cout<<++no<<endl; // 11 -> first increase then print

    // int n = 6;
    // int *p = &n;
    // int *q = p;
    // cout<<*q<<endl;

    // cout<<q<<endl;
    // q = q + 1;
    // cout<<q;

    // ***********Pointer 2.0*************
    // int arr[10] = {23, 122, 41, 67};

    // cout << "Address of first memory block is : " << arr << endl;
    // cout << "Address of first memory block is : " << &arr[0] << endl
    //      << endl;

    // cout << "Address of second memory block is : " << &arr[1] << endl
    //      << endl;

    // cout << "value of first memory block is : " << arr[0] << endl;
    // cout << "value of first memory block is : " << *arr << endl;
    // cout << "value of first memory block + 1 is : " << (*arr) + 1 << endl;
    // cout << "value of first memory block + 1 is : " << *arr + 1 << endl << endl; // 2 + 1 = 3

    // cout << "value of second memory block is : " << arr[1] << endl;
    // cout << "value of second memory block is : " << *(arr + 1) << endl
    //      << endl;

    // int i = 3;
    // cout<< i[arr]<<endl;

    // int *p = &arr[0];  // *p size -> 8 bytes
    // cout<<*p<<endl;

    // ******sizeof**********
    // int temp[10] = {1,2,3,4,5};
    // cout<< sizeof(temp)<<endl;
    // cout<< sizeof(*temp)<<endl; // 4
    // cout<< sizeof(&temp)<<endl; // 8

    // int *ptr = &temp[0];
    // cout<< sizeof(ptr)<<endl; // 8
    // cout<< sizeof(*ptr)<<endl; // 4
    // cout<< sizeof(&ptr)<<endl; // 8

    // *****************
    // int a[10] = {1,2,3,4,5};
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<&a[0]<<endl<<endl;

    // int *p = &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

    // int arr[10] = {1,2};
    // //    arr = arr + 1; // Error
    // cout << &arr[0] << endl;

    // int *ptr = &arr[0];
    // cout << ptr << endl;
    // cout << *ptr << endl;
    // ptr = ptr + 1;
    // cout << ptr << endl;

    // ***********char Array*********
    // int arr[5] = {1,2,3,4,5};
    // cout << arr << endl;  // print address
    // cout<< arr[0]<<endl;

    // char ch[5] = "Abhi";
    // cout<< ch << endl;  // print value

    // char *c = &ch[0];
    // cout<< c << endl; // print entire string

    // char temp = 'A';
    // char *p = &temp;
    // cout<< p << endl;

    // *********Double Pointer***********
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    //     cout<<"Address of i : "<<&i<<endl;
    //    cout<<"Value inside ptr : "<<ptr<<endl<<endl;

    //    cout<<"Address of ptr : "<<&ptr<<endl;
    //    cout<<"value inside ptr2 : "<<*ptr2<<endl;

    cout << i << endl;
    cout << *ptr << endl;
    cout << **ptr2 << endl
         << endl;

    cout << &i << endl;
    cout << ptr << endl;
    cout << *ptr2 << endl
         << endl;

    cout << &ptr << endl;
    cout << ptr2 << endl
         << endl;

    cout << &ptr2 << endl;
    return 0;
}