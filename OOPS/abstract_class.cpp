#include <iostream>
using namespace std;
class super1
{
public:
    virtual void disp() = 0;
    int v1;
};
class sub2 : public super1
{
public:
    void disp()
    {
        cout << "access base class -super1 -disp() in derived class sub1";
    }
};
int main()
{
    super1 *s1obj;
    sub2 obj2;
    s1obj = &obj2;
    s1obj->disp();
    return 0;
}