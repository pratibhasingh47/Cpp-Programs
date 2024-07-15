#include <bits/stdc++.h>
using namespace std;
class example
{
public:
    int a;
    void add(example E)
    {
        a = a + E.a;
    }
};
int main()
{
    example E1, E2;
    E1.a = 50;
    E2.a = 100;
    cout << "Initial value\n";
    cout << "Value of object\n"
         << E1.a << "\nObject-2\n"
         << E2.a << endl;
    E2.add(E1);
    cout << "New Value of object\n"
         << E1.a << "\nObject-2\n"
         << E2.a << endl;
}