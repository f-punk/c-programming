#include <stdio.h>

int main(void)
{
    int num, first_num, last_num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    first_num = num / 10;
    last_num = num % 10;
    printf("The reversal is: %d%d\n", last_num, first_num);
    return 0;
}
