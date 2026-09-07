#include <stdio.h>

int main(void)
{
    // find the max one
    int a, b, c;
    int max;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {
	if (b < c) max = c;
	else max = b;
    }
    else if (a > b)
    {
	if (a < c) max = c;
	else max = a;
    }
    else printf("ERROR: Cannot find the max one.\n");

    printf("The max one is %d.\n", max);

    return 0;
}
