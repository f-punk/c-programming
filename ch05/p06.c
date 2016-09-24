/* Checks whether a European Article Number is valid */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, check, first_sum, second_sum, total;

    printf("Enter the 13 digits of an EAN bar code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &check);
    first_sum = n2 + n4 + n6 + n8 + n10 + n12;
    second_sum = n1 + n3 + n5 + n7 + n9 + n11;
    total = 3 * first_sum + second_sum;

    if (check == 9 - ((total - 1) % 10))
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}
