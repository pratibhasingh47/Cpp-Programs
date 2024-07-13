#include <iostream>
using namespace std;
class emp
{
    int id;
    static int count;

public:
    void get_data()
    {
        cout << "Enter ID ";
        cin >> id;
        count++;
    }
    void print_data()
    {
        cout << "The id of employee is " << id << endl;
        cout << "Employee no. is " << count;
    }
};
int emp ::count;
int main()
{
    emp obj;
    obj.get_data();
    obj.print_data();
    return 0;
}