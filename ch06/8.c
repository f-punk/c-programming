#include <stdio.h>

int main(void)
{
    int i, day, num_days, slot;
    printf("Enter number of days in month: ");
    scanf("%d", &num_days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    printf("  S  M  T  W  T  F  S\n");

    for (slot = 0, i = 1; i <= num_days; slot++, i++) {
        while (day > 1) {  
            printf("   ");
            day--;
            slot++;
        }
        if (slot % 7 == 0 && slot != 0) {
            printf("\n");
            printf("%3d", i);
        }
        else {
            printf("%3d", i);
        }
    }

    printf("\n");
    return 0;
}

