#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 45, 54, 71, 76, 12};
    int n = sizeof(int);
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    reverse(arr, arr + n);

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}