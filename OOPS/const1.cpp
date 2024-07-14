#include <iostream>
using namespace std;
class para_const
{
private:
    int v1, v2, v3;

public:
    para_const(int n1, int n2, int n3)
    {
        v1 = n1;
        v2 = n2;
        v3 = n3;
        cout << "Demo for paramaterized constructer" << endl;
    }
    void display()
    {
        cout << "N variable1 = " << v1 << endl;
        cout << "N variable2 = " << v2 << endl;
        cout << "N variable3 = " << v3 << endl;
    }
};
int main()
{
    para_const pc1(90, 80, 70);
    pc1.display();
    return 0;
}