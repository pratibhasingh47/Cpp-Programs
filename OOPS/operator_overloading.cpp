#include <iostream>
using namespace std;
class demooverload
{
public:
    int count;
    demooverload() : count(50) {}
    void operator++()
    {
        ++count;
    }
    void operator--()
    {
        --count;
    }
    void show()
    {
        cout << "counter variables " << count << endl;
    }
};

int main()
{
    demooverload obj;
    ++obj;
    obj.show();
    obj.operator++();
    obj.show();
    obj.operator--();
    obj.show();
    return 0;
}