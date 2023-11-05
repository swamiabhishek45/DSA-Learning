#include<iostream>
using namespace std;

void update(int **p){
    // p = p + 1;  // nothing happen

    *p = *p + 1; // change the address of p

    // **p = **p + 1; // change the value of i

}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Before****" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl << endl;
    update(p2);
    cout << "After****" << endl;
    cout << i << endl;
    cout << p << endl;
    cout << p2 << endl;
    return 0;
}