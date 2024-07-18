// WRITE A BASIC PROGRAM OF Compile time POLYMORPHISM IN C++?

#include <iostream>
using namespace std;

class KG
{
public:
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }
    void func(int x, int y)
    {
        cout << "value of x and y is " << x << "," << y << endl;
    }
};
int main()
{
    KG obj1;
    obj1.func(7);
    obj1.func(9.26);
    obj1.func(85, 69);
    return 0;
}
// Output :- value of x is 7
// value of x is 9.26
// value of x and y is 85,69

// ---------------------------------------------------------------------------------------------------------

// WRITE A PROGRAM OF FUNCTION OVERLOADING USING COMPILE TIME POLYMORPHISM IN C++?
#include <iostream>
using namespace std;

class displaydata
{
public:
    void show(int x)
    {
        cout << "Value of X: " << x << endl;
    }

    void show(double y)
    {
        cout << "Value of Y: " << y << endl;
    }

    void show(float z)
    {
        cout << "Value of Z: " << z << endl;
    }

    void show(int x, double y, float z)
    {
        cout << "Sum of X, Y, Z is " << x + y + z << endl;
    }

    void show()
    {
        cout << "No arguments provided." << endl;
    }
};

int main(void)
{
    displaydata obj1;
    obj1.show(7);
    obj1.show(9.5);
    obj1.show(21.3);
    obj1.show(7, 9.5, 21.3);
    obj1.show();
    return 0;
}
// OUTPUT:-Value of X: 7
// Value of Y: 9.5
// Value of Y: 21.3
// Sum of X, Y, Z is 37.8
// No arguments provided.

// ----------------------------------------------------------------------------

// 3.write a program of operator overloading using c++?
#include <iostream>
using namespace std;
class A
{

    string x;

public:
    A() {}
    A(string i)
    {
        x = i;
    }
    void operator+(A);
    void display();
};

void A::operator+(A a)
{

    string m = x + a.x;
    cout << "The result of the addition of two objects is : " << m;
}
int main()
{
    A a1("Welcome");
    A a2("back");
    a1 + a2;
    return 0;
}
// Output
// The result of the addition of two objects is: Welcomeback

// --------------------------------------------------------------------------

// 4.Write a run time polymorphism program using method overriding in c++?
#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "print base class" << endl;
    }
    void show()
    {
        cout << "show base class" << endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "print derived class" << endl;
    }
};
int main()
{
    base *bptr; // base class pointer .it can only access the base class members
    derived d;  // making object of derived class
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}
// output:-print derived class
// show base class

// -------------------------------------------------------------------------

// 5.write a Virtual Function used to invoke the derived class in a program in c++?
#include <iostream>
using namespace std;

class Add
{
public:
    virtual void print()
    {
        int a = 20, b = 30;
        cout << " base class Action is:" << a + b << endl;
    }

    void show()
    {
        cout << "show base class" << endl;
    }
};

class Sub : public Add
{
public:
    void print() // print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
    {
        int x = 20, y = 10;

        cout << " derived class Action:" << x - y << endl;
    }

    void show()
    {
        cout << "show derived class" << endl;
    }
};

// main function
int main()
{
    Add *aptr;
    Sub s;
    aptr = &s;

    // virtual function, binded at runtime (Runtime polymorphism)
    aptr->print();

    // Non-virtual function, binded at compile time
    aptr->show();

    return 0;
}
// Output
//  derived class Action:10

// show base class