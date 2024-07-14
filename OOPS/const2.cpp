#include <iostream>
using namespace std;
class copy_const
{
private:
    int v1, v2, v3;

public:
    copy_const(int n1, int n2, int n3)
    {
        v1 = n1;
        v2 = n2;
        v3 = n3;
        cout << "Demo for parametrized constructer" << endl;
    }
    copy_const(copy_const &obj)
    {
        v1 = obj.v1;
        v2 = obj.v2;
        v3 = obj.v3;
    }
    void display()
    {
        cout << "Variable 1 " << v1 << endl;
        cout << "Variable 2 " << v2 << endl;
        cout << "Variable 3 " << v3 << endl;
    }
};
int main()
{
    copy_const C1(100, 200, 300);
    copy_const C2(C1);
    cout << "Here call copy constructer " << endl;
    C2.display();
    return 0;
}