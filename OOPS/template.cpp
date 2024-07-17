#include <iostream>
using namespace std;
template <class T>
T add(T &v1, T &v2)
{
    T result = v1 + v2;
    return result;
}
int main()
{
    int i = 20;
    int j = 200;
    float m = 21.47;
    float n = 47.2061;
    cout << "Addition is " << add(i, j) << endl;
    cout << "Addition is " << add(m, n) << endl;
    return 0;
}