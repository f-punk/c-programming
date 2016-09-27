#include <stdio.h>

int main(void)
{
    int i, month, day, num_days, slot;
    printf("Enter month (1=Jan, 2=Feb): ");
    scanf("%d", &month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    switch (month) {
        case 1: printf("      JANUARY\n"); break;
        case 2: printf("      FEBRUARY\n"); break;
        case 3: printf("       MARCH\n"); break;
        case 4: printf("       APRIL\n"); break;
        case 5: printf("        MAY\n"); break;
        case 6: printf("        JUNE\n"); break;
        case 7: printf("        JULY\n"); break;
        case 8: printf("       AUGUST\n"); break;
        case 9: printf("      SEPTEMBER\n"); break;
        case 10: printf("      OCTOBER\n"); break;
        case 11: printf("      NOVEMBER\n"); break;
        case 12: printf("      DECEMBER\n"); break;
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            num_days = 31;
        case 2:
            num_days = 28;
        case 4: case 6: case 9: case 11:
            num_days = 30;
    }

    printf("---------------------\n");
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

