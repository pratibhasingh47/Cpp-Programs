#include <bits/stdc++.h>
using namespace std;
class box
{
public:
    static int length;
    static int breath;
    static int height;

    static void print()
    {
        cout << "The Value of length is " << length << endl;
        cout << "The Value of breath is " << breath << endl;
        cout << "The Value of height is " << height << endl;
    }
};
int box ::length = 10;
int box ::breath = 20;
int box ::height = 30;
int main()
{
    box b;
    cout << "Static member funtion is called through object name\n"
         << endl;
    b.print();
    cout << "Static member function is called through class name\n"
         << endl;
    box ::print();
    return 0;
}