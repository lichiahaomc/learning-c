#include <stdio.h>

int main(void)
{
    const int PASS_GRADE = 60;
    const int MAX_GRADE = 100;
    const int MIN_GRADE = 0;
    int input_grade;
    
    printf("Please enter your grade.\n");
    scanf("%d", &input_grade);

    if (input_grade >= PASS_GRADE && input_grade <= MAX_GRADE)
    {
	printf("You pass the exam.\n");
    }
    else if (input_grade < PASS_GRADE && input_grade >= MIN_GRADE)
    {
	printf("You lose the exam.\n");
    }
    else
    {
	printf("Please enter the correct grade.\n");
    }

    printf("Good-bye.\n");

    return 0;
}
