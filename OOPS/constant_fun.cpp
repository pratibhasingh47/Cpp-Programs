#include <iostream>
using namespace std;
class area
{
    int x;

public:
    void read(const int &a)
    {
        x = a;
    }
    int ar()
    {
        return x * x;
    }
};
int main()
{
    area obj;
    obj.read(5);
    cout << obj.ar() << endl;
    return 0;
}