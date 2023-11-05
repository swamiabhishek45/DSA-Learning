#include <iostream>
using namespace std;

// Encapsulation
class student
{

private:
    string name;
    int Roll_No;
    int age;
    char Div;

public:
    int getAge()
    {
        return this->age;
    }
};

class Human
{

public:
    int height;
    int weight;
    int age;

    int getAge()
    {
    }

    int getWeigth(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
    public:
    string color;

    void sleep(){
        cout << "Male is sleeping" << endl;

    }
};

int main()
{
    Male obj1;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    cout << obj1.age << endl;
    
    cout << obj1.color << endl;
    return 0;
}