#include <stdio.h>

int main(void)
{
    int a = 10;

    if (a == 10) printf("Yes\n");
    else printf("No\n");

    // the same
    (a == 10) ? printf("Yes\n") : printf("No\n"); 

    return 0;
}
