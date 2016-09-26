/* Program to dsiplay tax due on a given income */

#include <stdio.h>

int main(void)
{
    float amount;
    printf("Enter amount of taxable income: ");
    scanf("%f", &amount);

    printf("Amount of tax payable: £");

    if (amount < 750)
        printf("%4.2f", (amount / 100));
    else if (amount < 2250)
        printf("%4.2f", ((((amount - 750) / 100) * 2) + 7.50));
    else if (amount < 3750)
        printf("%4.2f", ((((amount - 2250) / 100) * 3) + 37.50));
    else if (amount < 5250)
        printf("%4.2f", ((((amount - 3750) / 100) * 4) + 82.50));
    else if (amount < 7000)
        printf("%4.2f", ((((amount - 5250) / 100) * 5) + 142.50));
    else
        printf("%4.2f", ((((amount - 7000) / 100) * 6) + 230.00));

    printf("\n");

    return 0;
}
