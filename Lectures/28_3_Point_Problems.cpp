#include <iostream>
using namespace std;

// int main()
// {
// int first = 8;
// int second = 18;
// int *ptr = &second;
// *ptr = 9;
// cout << first << " " << second << endl;

// int first = 8;
// int *p = &first;
// int *q = p;
// (*q)++;
// cout << first << endl;

// int first = 8;
// int *p = &first;
// cout << ++(*p) << endl;
// cout << first << endl;

// int *p = 0;
// int first  = 110;
// p = &first; // *p = first -> wrong
// cout << *p ;

// int first = 8;
// int second = 11;
// int *third = &second;
// first = *third;
// *third += 2;
// cout << first << " " << second;

// float f = 12.5;
// float p = 21.5;
// float* ptr = &f;
// (*ptr)++;
// *ptr = p;
// cout << *ptr << " " << f << " " << p << endl;

// int arr[5];
// int *ptr;
// cout << sizeof(arr) << " " << sizeof(ptr) ;

// int arr[] = {11, 21, 13, 14};
// cout << *(arr) << " " << *(arr+1);

// int arr[6] = {11, 12, 21};
// cout << arr << " " << &arr;

// int arr[6] = {11, 12, 21};
// cout << (arr + 1);

// int arr[6] = {11, 12, 21};
// int *p = arr;
// cout << p[2]; // p[2] = *(p + 2)

// int arr[] = {11,12,13,14,15};
// cout << *(arr) << " " << *(arr + 3);

// int arr[] = {11,21,31,41};
// int *ptr = arr++;
// cout << *ptr ;

// char ch = 'a';
// char* ptr = &ch;
// ch++;
// cout << *ptr;

// char arr[] = "abcde";
// char *p = &arr[0];
// cout << p ;

// char arr[] = "abcde";
// char *p = &arr[0];
// p++;
// cout << p;

// char str[] = "Abhi";
// char *p = str;
// cout << str[0] << " " << p[0];
//     return 0;
// }

void update(int *p)
{
    *p = (*p) * 2;
}

void increment(int **p)
{
    ++(**p);
}

void funt(int a[]){
    cout << a[0] << " ";
}
int main()
{
    // int i = 10;
    // update(&i);
    // cout<< i;
    // return 0;

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout<< first << " "<<second;

    // int  first =100;
    // int *p =&first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl;

    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num ;

    // char s[] = "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0];

    int a[] = {1, 2, 3, 4};
    funt(a + 1);
    cout << a[0] ;
}