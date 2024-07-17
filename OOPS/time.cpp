#include <iostream>
using namespace std;
class time
{
    int hr, sec, min;

public:
    void get_time()
    {
        printf("Enter the hour : ");
        scanf("%d", &hr);
        printf("Enter the min : ");
        scanf("%d", &min);
        printf("Enter the sec : ");
        scanf("%d", &sec);
    }
    void put_time()
    {
        if (hr <= 24)
        {
            printf("%d ", hr);
            if (min <= 60)
            {
                printf("%d", min);
                if (sec <= 60)
                {
                    printf("%d", sec);
                }
                else
                {
                    printf("Wrong sec imput");
                }
            }
            else
            {
                printf("Wrong min imput");
            }
        }
        else
        {
            printf("Wrong Input");
        }
    }
};
int main()
{
    time t;
    t.get_time();
    t.put_time();
    return 0;
}