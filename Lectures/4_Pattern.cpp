#include <iostream>
using namespace std;

int main()
{
    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << " * ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int rows = 4;
    // int cols = 4;
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int i=1,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<< j ;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i=1,n;
    // cin>>n;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<< n-j+1;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // int i = 1, n;
    // cin >> n;
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << " " << count++ << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << " * ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i <<" ";
            j++;
        }
        cout << endl;
        i++;
    }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     // int value = i;
    //     while (j <= i)
    //     {
    //         cout << i+j-1;
    //         // value++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i-j+1;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A'+ i - 1;
    //         cout << ch;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout << ch;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // char start  = 'A';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << start;
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n, i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char start = 'A' + i + j - 2;
    //     while (j <= n)
    //     {
    //         cout << start;
    //         start++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int i = 1, n;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while (j <= i)
    //     {
    //         cout << ch;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int i = 1, n;
    // cin >> n;
    // char ch = 'A' + i - 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int i = 1, n;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while (j <= i)
    //     {
    //         cout << ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int i = 1, n;
    // cin >> n;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + n - i;
    //     while (j <= i)
    //     {
    //         cout << ch++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    return 0;
}