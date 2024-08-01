#include <bits/stdc++.h>
using namespace std;

bool next();

int main()
{
    printf("Hi\n");
    cout << "Hiiiii Pratibha" << endl;
    cout << "Hiiiii MorningStar\n";

    int n;
    scanf("%d", &n);
    cout << "scanf == " << n << endl;

    cin >> n;
    cout << "cin == " << n << endl;

    int a, b, c;
    cin >> a >> b >> c;
    cout << a << " " << b << " " << c << endl;
    cout << a + b + c << endl;

    if (next() == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}

bool next()
{
    return true;
}