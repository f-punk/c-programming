/* Given wind speed, output wind force */

#include <stdio.h>

int main(void)
{
    int speed;
    printf("Enter wind speed in knots: ");
    scanf("%d", &speed);
    printf("Wind speed of %d,", speed);
    if (speed < 1)
        printf(" Calm ");
    else if (speed < 4)
        printf(" Light air ");
    else if (speed < 28)
        printf(" Breeze ");
    else if (speed < 48)
        printf(" Gale ");
    else if (speed < 64)
        printf(" Storm ");
    else
        printf(" Hurricane ");

    printf("on the Beaufort Scale\n");

    return 0;
}
