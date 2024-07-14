#include <iostream>
using namespace std;
class length
{
public:
    int l;
    length()
    {
        l = 100;
    }
};
int main()
{
    length obj1;
    cout << "Line size is " << obj1.l << " cm";
    return 0;
}