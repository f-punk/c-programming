#include <stdio.h>

int main(void)
{
    int hour, mins;
    printf("Enter a 24hr time, eg 21:00 : ");
    scanf("%d:%d", &hour, &mins);
    
    if (hour == 0)
        printf("Equivalent 12-hr time: 12:%.2d AM\n", mins);
    else if (hour == 12)
        printf("Equivalent 12-hr time: %d:%.2d PM\n", hour, mins);
    else if (hour > 12)
        printf("Equivalent 12-hr time: %d:%.2d PM\n", (hour - 12), mins);
    else
        printf("Equivalent 12-hr time: %d:%.2d AM\n", hour, mins);
    return 0;
}
