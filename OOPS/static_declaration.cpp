#include <iostream>
using namespace std;
class DSM
{
    private:
    int a,b;
    public:
    static int v1;
    void read(int x,int y){
        a=x;
        b=y;
        v1=v1+1;
    }
    void show(){
        cout << a << endl << b << endl;
    }
};
int DSM :: v1 =0;
int main()
{
    DSM do1,do2;
    do1.read(10,20);
    do2.read(100,200);
    do1.show();
    do2.show();
    cout << do1.v1 << endl;
    cout << do2.v1 << endl;
    cout << DSM::v1 << endl;
    return 0;
}