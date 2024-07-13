#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 5, 7, 3, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Smallest number: " << smallest << std::endl;
    cout << "Largest number: " << largest << std::endl;

    return 0;
}