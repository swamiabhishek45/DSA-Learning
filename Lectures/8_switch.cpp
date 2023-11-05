#include<iostream>
using namespace std;

int main()
{
    // int a, b;

    // cout << "Enter the value of a: ";
    // cin >> a;

    // cout << "Enter the value of b: ";
    // cin >> b;

    // char op;
    // cout << "Choose the operator: ";
    // cin>>op;


    // switch (op) 
    // {
    // case '+':
    //     cout<<a+b<<endl;
    //     break;
    // case '-':
    //     cout<<a-b<<endl;
    //     break;
    // case '*':
    //     cout<<a*b<<endl;
    //     break;
    // case '/':
    //     cout<<a/b<<endl;
    //     break;
    // case '%':
    //     cout<<a%b<<endl;
    //     break;
    
    // default:
    //     cout<<"It is default case";
    //     break;
    // }




    int Amount;
    cout<<"Enter the amount: ";
    cin>>Amount;

    int note;
    cout<<"Enter your notes: ";
    cin>>note;

    switch (note)
    {
    case 2000:
        cout<<(Amount/note);
        break;

    case 500:
        cout<<(Amount/note);
        break;

    case 200:
        
        break;

    case 100:
        
        break;

    case 50:
        
        break;

    case 20:
        
        break;

    case 1:
        
        break;
    
    default:
        break;
    }
    return 0;
}