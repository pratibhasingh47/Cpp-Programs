//pure virtual 
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void show() = 0;
};
class Man : public Animal
{
public:
    void show()
    {
        cout << "Man is the part of animal husbandry " << endl;
    }
};
int main()
{
    Animal *bptr;
    Man m;
    bptr = &m;
    bptr->show();
    return 0;
}