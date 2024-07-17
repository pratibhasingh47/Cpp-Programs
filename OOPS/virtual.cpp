#include<iostream>
using namespace std;
class a1{
    public:
    int x;
};
class b1{
    public:
    int y;
};
class c1 : virtual public a1{
    public:
    int z;
};
class d1:public c1,public b1{
    public:
    int x1;
};
main()
{
    d1 obj;
    obj.x = 100;
    obj.y = 20;
    obj.z = 30;
    obj.x1 = 200;
    cout << "x : "<< obj.x << endl;
    cout << "y : "<< obj.y << endl;
    cout << "z : "<< obj.z << endl;
    cout << "x1 : "<< obj.x1 << endl;
    return 0;
}