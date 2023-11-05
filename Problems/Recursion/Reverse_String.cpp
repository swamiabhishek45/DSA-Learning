#include<iostream>
using namespace std;

void reverseStr(string &name, int i, int j){

    if(i>j)
        return ;
    
    swap(name[i], name[j]);
    i++;
    j--;

    reverseStr(name, i, j);

}

int main()
{
    
    string name = "Abhishek";
    reverseStr(name, 0, name.length() - 1);
    cout << name;
    return 0;
}
