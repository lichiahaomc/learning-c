#include <stdio.h>

int main(void)
{
    int numbers[10], number;

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;
    numbers[5] = 6;
    numbers[6] = 7;
    numbers[7] = 8;
    numbers[8] = 9;
    numbers[9] = 10;
    numbers[10] = 11;

    number = 5;

    printf("The %dth number in number[] is %d.\n", number + 1, numbers[number]);

    return 0;
}
