#include <iostream>
using namespace std;
class employee
{
    int a, b;
    friend employee sum_salary(employee e1, employee e2);

public:
    void enter_info(int x, int y)
    {
        a = x;
        b = y;
    }
    void print_info()
    {
        cout << "The salary is " << a << endl;
        cout << "The ID is " << b << endl << endl;
    }
};

employee sum_salary(employee e1, employee e2)
{
    employee e3;
    e3.enter_info((e1.a + e2.a), (e1.b + e2.b));
    return e3;
}
int main()
{
    employee E1, E2;
    E1.enter_info(10000, 21);
    E2.enter_info(10000, 22);

    E1.print_info();
    E2.print_info();

    employee sum;
    sum = sum_salary(E1, E2);
    sum.print_info();
    return 0;
}