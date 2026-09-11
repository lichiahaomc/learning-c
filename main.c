#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;
    *p = 7;

    printf("%d\n", *p);

    return 0;
}
