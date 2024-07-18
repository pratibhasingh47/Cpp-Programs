// Q1.C++ program to demonstrate Default constructors ?
#include <iostream>
using namespace std;

class Base
{
public:
    // compiler "declares" constructor
};

class A
{
public:
    // User defined constructor
    A() { 
        cout << "A Constructor" << endl; }

    // uninitialized
    int size;
};

class B : public A
{
    // compiler defines default constructor of B, and
    // inserts stub to call A constructor

    // compiler won't initialize any data of A
};

class C : public A
{
public:
    C()
    {
        // User defined default constructor of C
        // Compiler inserts stub to call A's constructor 
        cout << "C Constructor" << endl;

        // compiler won't initialize any data of A
    }
};

class D
{
public:
    D()
    {
        // User defined default constructor of D
        // a - constructor to be called, compiler inserts
        // stub to call A constructor
        cout << "D Constructor" << endl;

        // compiler won't initialize any data of 'a'
    }

private:
    A a;
};

// Driver Code 
int main()
{
    Base base;

    B b;
    C c;
    D d;

    return 0;
}
// Output
//     A Constructor
//         A Constructor
//             C Constructor
//                 A Constructor
//                     D Constructor

// Q2.C++ program to demonstrate Parameterized Constructor
    

#include <iostream>
using namespace std;

// Class declaration.
class Demo
{
    // Private block  to declare data member( X,Y )
    // of integer type.
private:
    int X;
    int Y;

    // Public block of member function to
    // access data members.
public:
    // Declaration of perameterized constructor to
    // initailize data members.
    Demo(int a, int b);
    // To take input from user.
    void Input();
    // To display output onn screen.
    void Display();

}; // End of class

// Definition of constructor.
Demo::Demo(int a, int b)
{
    X = a;
    Y = b;
}

// Definition of Input() member function.
void Demo::Input()
{
    cout << "Enter Value of X: ";
    cin >> X;
    cout << "Enter Value of Y: ";
    cin >> Y;
}

// Definition of Display() member function.
void Demo::Display()
{
    cout << endl
         << "X: " << X;
    cout << endl
         << "Y: " << Y << endl;
}

int main()
{
    // Ctor autometically call when object is created.
    Demo d(10, 20);

    // Display value of data member.
    cout << endl
         << "Method 1: " << endl;
    cout << "Value after initialization: ";
    d.Display();

    d.Input();
    cout << "Value after User Input : ";
    d.Display();

    // We can also create object like this
    Demo d1 = Demo(10, 20);

    // Display value of data member.
    cout << endl
         << "Method 2: " << endl;
    cout << "Value after initialization: ";
    d1.Display();

    return 0;
}
// Output

//     Method 1 : Value after initialization : X : 10 Y : 20 Enter Value of X : 25 Enter Value of Y : 30 Value after User Input : X : 25 Y : 30

//     Method 2 : Value after initialization : X : 10 Y : 20

// Q3.C++ program to demonstrate Copy Constructor

#include <iostream>
using namespace std;

// Class declaration.
class Demo
{
    // Private block  to declare data member( X,Y ) of
    // integer type.
private:
    int X;
    int Y;

    // Public block of member function to
    // access data members.
public:
    // Declaration of parameterized constructor to
    // initialize data members.
    Demo(int a, int b);
    // Declaration of copy constructor to
    // initialize data members.
    Demo(const Demo &d);
    // To display output on screen.
    void Display();

}; // End of class

// Definition of parameterized constructor.
Demo::Demo(int a, int b)
{
    X = a;
    Y = b;
}

// Definition of copy constructor.
Demo::Demo(const Demo &d)
{
    X = d.X;
    Y = d.Y;
}

// Definition of Display () member function.
void Demo::Display()
{
    cout << endl
         << "X: " << X;
    cout << endl
         << "Y: " << Y << endl;
}

int main()
{
    // Ctor automatically call when object is created.
    Demo d1(10, 20);

    // Display value of data member.
    cout << endl
         << "D1 Object: " << endl;
    cout << "Value after initialization : ";
    d1.Display();

    // Intialize object with other object using copy constructor
    Demo d2 = Demo(d1); // also write like this :Demo d2(d1);

    // Display value of data member.
    cout << endl
         << "D2 Object: " << endl;
    cout << "Value after initialization : ";
    d2.Display();

    return 0;
}
// D1 Object : Value after initialization : X : 10 Y : 20 D2 Object : Value after initialization : X : 10 Y : 20

// Q4.C++ program to demonstrate Constructor Overloading

#include <iostream>
using namespace std;

// Class declaration.
class Demo
{
    // Private block to declare data member( X,Y )
    // of integer type.
private:
    int X;
    int Y;

    // Public blocks of member function to
    // access data members.
public:
    // Declaration of default constructor to
    // initialize data members.
    Demo();

    // Declaration of parameterized constructor to
    // initialize data members.
    Demo(int a, int b);
    // To display output onn screen.
    void Display();

}; // End of class

// Definition of parameterized constructor.
Demo::Demo()
{
    X = 10;
    Y = 20;
}

// Definition of parameterized constructor.
Demo::Demo(int a, int b)
{
    X = a;
    Y = b;
}

// Definition of Display() member function.
void Demo::Display()
{
    cout << endl
         << "X: " << X;
    cout << endl
         << "Y: " << Y << endl;
}

int main()
{
    Demo d1;
    cout << "Default Constructor: " << endl;
    cout << "Value after initialization : ";
    d1.Display();

    // Ctor automatically call when object is created.
    Demo d2(30, 40);
    cout << "Parameterized Constructor: " << endl;
    cout << "Value after initialization : ";
    d2.Display();

    return 0;
}
// Output

//     Default Constructor : Value after initialization : X : 10 Y : 2 Parameterized Constructor : Value after initialization : X : 30 Y : 40

 //  Q5.C++ program to demonstrate destructors

#include <iostream>
using namespace std;

// Class Declaration
class Demo
{
private: // Private Data member section
    int X, Y;

public: // Public Member function section
    // Default or no argument constructor.
    Demo()
    {
        X = 0;
        Y = 0;

        cout << endl
             << "Constructor Called";
    }
    // Destructor called when object is destroyed
    ~Demo()
    {
        cout << endl
             << "Destructor Called" << endl;
    }

    // To take user input from console
    void getValues()
    {
        cout << endl
             << "Enter Value of X : ";
        cin >> X;
        cout << "Enter Value of Y : ";
        cin >> Y;
    }
    // To print output on console
    void putValues()
    {
        cout << endl
             << "Value of X : " << X;
        cout << endl
             << "Value of Y : " << Y << endl;
    }
};

// main function : entry point of program
int main()
{
    Demo d1;

    d1.getValues();

    cout << endl
         << "D1 Value Are : ";
    d1.putValues();

    Demo d2;

    d2.getValues();
    cout << endl
         << "D2 Value Are : ";
    d2.putValues();

    // cout << endl ;

    return 0;
}
// Output
// Constructor Called
// Enter Value of X : 10 Enter Value of Y : 20
// D1 Value Are : Value of X : 10 Value of Y : 20
// Constructor Called
// Enter Value of X : 30 Enter Value of Y : 40
// D2 Value Are : Value of X : 30 Value of Y : 40
// Destructor Called
// Destructor Called

// Q6.C++ program to demonstrate constructor using this pointer?

#include <iostream>
using namespace std;

class Demo
{
private: // Private Data member section
    int X, Y;

public: // Public Member function section
    // Default or no argument constructor.
    Demo()
    {
        X = 0;
        Y = 0;

        cout << endl
             << "Constructor Called";
    }
    // Perameterized constructor.
    Demo(int X, int Y)
    {
        this->X = X;
        this->Y = Y;

        cout << endl
             << "Constructor Called";
    }

    // Destructor called when object is destroyed
    ~Demo()
    {
        cout << endl
             << "Destructor Called" << endl;
    }
    // To print output on console
    void putValues()
    {
        cout << endl
             << "Value of X : " << X;
        cout << endl
             << "Value of Y : " << Y << endl;
    }
};

// main function : entry point of program
int main()
{
    Demo d1 = Demo(10, 20);

    cout << endl
         << "D1 Value Are : ";
    d1.putValues();

    Demo d2 = Demo(30, 40);

    cout << endl
         << "D2 Value Are : ";
    d2.putValues();

    // cout << endl ;

    return 0;
}
// Output.0.

//     Constructor Called
//         D1 Value Are : Value of X : 10 Value of Y : 20

//                        Constructor Called
//                            D2 Value Are : Value of X : 30 Value of Y : 40

//                                           Destructor Called

//                                               Destructor Called361.2