/*Important Characteristics of Constructors in C++

->A constructor should be declared in the public section of the class
->They are automatically invoked whenever the object is created
->They cannot return values and do not have return types
->It can have default arguments
->We cannot refer to their address*/

#include <iostream>
using namespace std;

class values
{
    int a, b, c, d;

public:
    void printno()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
    }
    values();
};

values ::values()
{
    a = 10;
    b = 20;
    c = 30;
    d = 40;
}
int main()
{
    values x;
    x.printno();
    return 0;
}