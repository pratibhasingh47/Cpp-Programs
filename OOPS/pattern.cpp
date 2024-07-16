#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    int b = 4;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == i)
            {
                cout << j;
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }
    return 0;
}