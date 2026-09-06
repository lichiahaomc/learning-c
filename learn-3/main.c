#include <stdio.h>

int main(void)
{
    int user_input;
    
    printf("Please enter a number.\n");
    scanf("%d", &user_input); // remember to add '&' before.
    printf("You entered %d.\n", user_input);

    return 0;
}
