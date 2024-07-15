#include <iostream>
using namespace std;
class swapp
{
public:
    int x, y, temp;

public:
    void swapvalues(int a, int b)
    {
        x = a;
        y = b;
        temp = x;
        x = y;
        y = temp;
    }
    void display()
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
    }
};
int main()
{
    swapp s;
    s.swapvalues(10,20);
    s.display();
    return 0;
}