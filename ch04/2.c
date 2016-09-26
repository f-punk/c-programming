#include <stdio.h>

int main(void)
{
    int num, first_num, middle_num, last_num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    first_num = num / 100;
    middle_num = (num /10) % 10;
    last_num = num % 10;
    printf("The reversal is: %d%d%d\n", last_num, middle_num, first_num);
    return 0;
}
