/* Compare dates to see which comes first */

#include <stdio.h>

int main(void)
{
    int day, month, year, earliest_day, earliest_month, earliest_year, sum, earliest;

    printf("Enter date (dd/mm/yy): ");
    scanf("%2d/%2d/%2d", &day, &month, &year);
    sum = year * 10000 + month * 100 + day;
            
    earliest = sum;
    earliest_day = day;
    earliest_month = month;
    earliest_year = year;
    
    while (sum > 0) {
        printf("Enter date (dd/mm/yy): ");
        scanf("%2d/%2d/%2d", &day, &month, &year);
        sum = year * 10000 + month * 100 + day;
        
        if (sum == 0) {
            continue;
        }
        else if (sum < earliest) {
            earliest = sum;
            earliest_day = day;
            earliest_month = month;
            earliest_year = year;
        }
    }

    printf("%.2d/%.2d/%.2d is the earliest date. \n", earliest_day, earliest_month, earliest_year);

    return 0;
}
