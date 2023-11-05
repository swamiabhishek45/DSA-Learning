#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        // properties
        int *arr;
        int top;
        int size;

        // behaviour
        Stack(int size) {
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){

            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else {
                cout << "Stack Overflow" << endl;
            }
        }

        void pop() {

            if(top >= 0){
                top--;
            }
            else {
                cout << "Stack Underflow" << endl;
            }
        }

        int peek() {
            if(top >= 0){
                return arr[top];
            }
            else {
                cout << "Stack is empty" << endl;
                return -1;  
            }
        }

        bool isEmpty() {
            if(top == -1){
                return true;
            }
            else {
                return false;
            }
        }
};

int main()
{
    /*
    // L - I - F - O
    stack<int> s;

    // insert value into stack
    s.push(1);
    s.push(2);
    s.push(3);

    // remove value from stack
    s.pop();

    cout << s.top() ;

    if(s.empty()){
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    cout << "SIze is " << s.size();
    */

   Stack st(5);

   st.push(11);
   st.push(22);
   st.push(33);

   cout << "Before pop peek elem " << st.peek() << endl;

   st.pop();

   cout << "After pop peek elem " << st.peek() << endl;

   if(st.isEmpty()) {
    cout << "Stack is empty mere dost" << endl;
   }
   else {
    cout << "Stack is not empty mere dost" << endl;

   }
    return 0;
}