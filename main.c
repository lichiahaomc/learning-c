#include <stdio.h>

int main(void)
{
    char grade = 'B';

    switch (grade)
    {
	case 'A': printf("很棒\n"); break;
	case 'B': printf("非常棒\n"); break;
	case 'C': printf("做得好\n"); break;
	case 'D': printf("您通过了\n"); break;
	case 'E': printf("最好再试一下\n"); break;
	case 'F': printf("emmm...\n"); break;
	default: printf("无效成绩\n"); break;
    }
    printf("您的成绩是：%c\n", grade);

    return 0;
}
