#include <iostream>

int main()
{
    int sortedList1[] = {10, 15, 20, 25};
    int size1 = sizeof(sortedList1) / sizeof(sortedList1[0]);

    int sortedList2[] = {2, 3, 5, 7};
    int size2 = sizeof(sortedList2) / sizeof(sortedList2[0]);

    int mergedList[size1 + size2];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (sortedList1[i] < sortedList2[j])
        {
            mergedList[k] = sortedList1[i];
            i++;
        }
        else
        {
            mergedList[k] = sortedList2[j];
            j++;
        }
        k++;
    }

    // Append remaining elements from both lists, if any
    while (i < size1)
    {
        mergedList[k] = sortedList1[i];
        i++;
        k++;
    }

    while (j < size2)
    {
        mergedList[k] = sortedList2[j];
        j++;
        k++;
    }

    std::cout << "Merged List: ";
    for (int l = 0; l < size1 + size2; l++)
    {
        std::cout << mergedList[l] << " ";
    }

    return 0;
}