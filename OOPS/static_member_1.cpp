#include <iostream>
using namespace std;
class DSM
{
private:
    int a, b;

public:
    static int v1;
    DSM()
    {
        a = 10;
        b = 20;
        v1 = v1 + 1;
    }
};
int DSM ::v1 = 100;
int main()
{
    DSM do1, do2;
    cout << do1.v1 << endl;
    cout << do2.v1 << endl;
    cout << DSM::v1 << endl;
    return 0;
}