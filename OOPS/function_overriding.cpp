#include <iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout << "Here display function of base class" << endl;
    }
};
class Derived : public base
{
public:
    void display()
    {
        cout << "Display of derived class" << endl;
    }
};
class Derived1 : public Derived
{
public:
    void display()
    {
        cout << "Display of derived one class" << endl;
    }
};
int main()
{
    base obj;
    obj.display();
    Derived o;
    o.display();
    Derived1 b;
    b.display();
    return 0;
}