#include <iostream>
using namespace std;
class TPdemo
{
    int v1;

public:
    TPdemo()
    {
        v1 = 10000;
    }
    void disp(int v1)
    {
        cout << "the value of argumnent variable 1 = " << v1 << endl;
        cout << "the value of data mem 2 = " << this->v1 << endl;
    }
};
int main()
{
    TPdemo tp;
    tp.disp(200);
    return 0;
}