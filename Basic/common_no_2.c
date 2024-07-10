#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {2, 3, 4, 5, 6};
    int c[5] = {3, 4, 5, 6, 7};
    int check = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == b[j])
            {
                check++;
                break;
            }
        }
        for (int j = 0; j < 5; j++)
        {
            if (a[i] == c[j])
            {
                check++;
                break;
            }
        }
        if (check == 2)
        {
            printf("%d\t", a[i]);
        }
        check = 0;
    }
    return 0;
}