#include <iostream>
using namespace std;
class demo
{
    int x, y;

public:
    demo()
    {
        x = 0;
        y = 0;
    }
    void read(int a, int b)
    {
        x = a;
        y = b;
    }
    int show1()
    {
        return ++x;
    }
    int show2() const
    {
        return y;
    }
    void show12()
    {
        cout << "x is " << x << endl;
        cout << "y is " << y << endl;
    }
};
int main()
{
    demo s;
    s.read(10, 20);
    cout << s.show1() << endl;
    cout << s.show2() << endl;
    s.show12();
    return 0;
}