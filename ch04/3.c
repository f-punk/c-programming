#include <stdio.h>

int main(void)
{
    int first_num, middle_num, last_num;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &first_num, &middle_num, &last_num);
    printf("The reversal is: %d%d%d\n", last_num, middle_num, first_num);
    return 0;
}
