#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(3);
    s.push(5);
    s.push(9);
    s.push(2);
    s.push(4);

    if (s.size() / 2)
    {

        s.pop();
    }

    cout << s.top();

    return 0;
}