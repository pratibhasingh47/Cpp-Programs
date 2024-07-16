#include <iostream>
using namespace std;
class a1
{
public:
    int v1, v2;
    void read(int a, int b)
    {
        v1 = a;
        v2 = b;
    }
    void display()
    {
        cout << "Value of v1 is " << v1 << endl;
        cout << "Value of v2 is " << v2 << endl;
        cout << "Here display function of a1 class" << endl;
    }
};
class a2 : public a1
{
public:
    void display()
    {
        cout << "Here is the display of class a2" << endl;
    }
};
int main()
{
    a1 obj;
    obj.read(47,59);
    obj.display();
    a2 obj2;
    obj2.display();
    return 0;
}