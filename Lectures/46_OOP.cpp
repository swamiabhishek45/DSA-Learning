#include <iostream>
using namespace std;

// creation of class
class Hero
{

    // Properties
private:
    int health;

public:
    char level;

    int getHealth()
    {
        return health;
    }

    void setHealth(int h)
    {
        health = h;
    }

    // Default constructor
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // Parameterized Constructor
    Hero(int health, char level)
    {
        cout << "this : " << this << endl;
        this->health = health;
    }

    // Copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor Called";
    }
};

int main()
{
    // creation of object
    Hero Tony(10, 'B');
    Hero SRK(20, 'A');

    Tony = SRK; // Copy assignment operator

    SRK.print();

    Tony.print();
    cout << "Addres : " << &Tony << endl;
    Tony.getHealth();
    // Hero *b = new Hero; // call destructor manually for dynamic

    // Copy constructor
    Hero Akshay(Tony);
    Akshay.print();

    /*
    // static allocation
    Hero Ravan;
    cout << "Size is : " << sizeof(Ravan) << endl;

    Ravan.setHealth(80); // When Private
    cout << "Health: " << Ravan.getHealth() << endl;

    Ravan.level = 'A';
    cout << "Level: " << Ravan.level << endl;

    // Dynamic Allocation -> Heap
    Hero *h = new Hero;

    h->setHealth(50);
    cout << "Health in Heap is : " << (*h).getHealth() << endl;
    cout << "Health in Heap is : " << h->getHealth() << endl;

    */

    return 0;
}