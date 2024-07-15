#include<iostream>
using namespace std;
class demo1{
    public :
    void display(){
    cout << "Here the first inheritance demo class of the program." << endl;
    }
};
class demo2 : public demo1
{
    public: 
    void show()
    {
        cout << "Here derived class from demo1." << endl;
    }
};
class demo3 : public demo2
{};
int main()
{
    demo3 obj1;
    obj1.display();
    demo2 obj2;
    obj2.show();
    return 0;
}