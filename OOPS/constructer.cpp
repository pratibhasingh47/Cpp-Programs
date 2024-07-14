#include <iostream>
using namespace std;
class Democonst
{
private:
    int n1, n2, n3;

public:
    int i;
    Democonst(void);
    void display()
    {
        cout << "1 number is = " << n1 << "\nNumber 2 is = " << n2 << "\nNumber 3 is " << n3 << endl;
    };
};
Democonst::Democonst(void)
{
    cout << "Here calling the constructer" << endl;
    i = 4;
    n1 = 10;
    n2 = 20;
    n3 = 30;
};
int main()
{
    Democonst i;
    i.display();
}