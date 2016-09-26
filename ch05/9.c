/* Compare two dates to see which comes first */

#include <stdio.h>

int main(void)
{
    int day1, month1, year1, day2, month2, year2, sum1, sum2;

    printf("Find the earliest of two dates:\n");
    printf("Enter first date (dd/mm/yy): ");
    scanf("%2d/%2d/%2d", &day1, &month1, &year1);
    printf("Enter second date (dd/mm/yy):");
    scanf("%2d/%2d/%2d", &day2, &month2, &year2);
    
    sum1 = year1 * 10000 + month1 * 100 + day1;
    sum2 = year2 * 10000 + month2 * 100 + day2;

    if (sum2 > sum1)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day1, month1, year1, day2, month2, year2);
    else if (sum2 < sum1)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", day2, month2, year2, day1, month1, year1);
    else
        printf("Two dates are the same\n");

    return 0;
}
