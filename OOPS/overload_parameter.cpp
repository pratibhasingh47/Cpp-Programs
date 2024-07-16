#include <bits/stdc++.h>
#include <string.h>
using namespace std;
class data
{
public:
    void show(int x)
    {
        cout << x << endl;
    }
    void show(double y)
    {
        cout << y << endl;
    }
    void show(string z)
    {
        cout << z << endl;
    }
};
int main()
{
    data obj;
    obj.show(100);
    obj.show(100.22);
    obj.show("Hello World!");
    return 0;
}