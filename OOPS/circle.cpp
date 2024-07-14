#include <bits/stdc++.h>
using namespace std;
class circle
{
public:
    double radius;
    double area()
    {
        return 3.1415926535 * radius * radius;
    }
};
int main()
{
    circle c;
    cin >> c.radius;
    cout << c.area() << endl;
    return 0;
}