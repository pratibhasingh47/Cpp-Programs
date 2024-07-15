#include <iostream>
using namespace std;
class displaydata
{
public:
    void add(int v1, int v2)
    {
        int result = v1 + v2;
        cout << "Addition (int): " << result << endl;
    }
    void add(char v1, char v2)
    {
        char result = v1 + v2;
        cout << "Addition (char): " << result << endl;
    }
    void add(double v1, int v2)
    {
        double result = v1 * v2;
        cout << "Multiplication (double * int): " << result << endl;
    }
    void sub(int v1, int v2)
    {
        int result = v1 - v2;
        cout << "Subtraction (int): " << result << endl;
    }
    void sub(char v1, char v2)
    {
        char result = v1 - v2;
        cout << "Subtraction (char): " << result << endl;
    }
    void sub(int v1, double v2)
    {
        double result = v1 - v2;
        cout << "Subtraction (int - double): " << result << endl;
    }
};

int main()
{
    displaydata obj1;
    int intValue1 = 5;
    char charValue1 = 'A';
    double doubleValue1 = 3.0;

    obj1.add(intValue1, 3);
    obj1.add(charValue1, 'B');
    obj1.add(doubleValue1, 4);
    obj1.sub(intValue1, 3);
    obj1.sub(charValue1, 'B');
    obj1.sub(8, doubleValue1);
    return 0;
}
