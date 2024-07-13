#include <stdio.h>
#include <string.h>
int main()
{
    char c[10];
    fgets(c, 10, stdin);
    puts(c);
    return 0;
}