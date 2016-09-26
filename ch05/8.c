#include <stdio.h>

int main(void)
{
    int hour, mins, time_mins, depart1, depart2, depart3, depart4, depart5, depart6, depart7, depart8;
    printf("Enter a 24-hr time: ");
    scanf("%d:%d", &hour, &mins);
    time_mins = hour * 60 + mins;
    depart1 = (8 * 60);
    depart2 = (9 * 60 + 43);
    depart3 = (11 * 60 + 19);
    depart4 = (12 * 60 + 47);
    depart5 = (14 * 60);
    depart6 = (15 * 60 + 45);
    depart7 = (19 * 60);
    depart8 = (21 * 60 + 45);

    printf("Closet departure time is ");

    if (time_mins <= (depart1 + depart2) / 2)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");

    else if (time_mins <= (depart2 + depart3) / 2) 
            printf("9:43 a.m., arriving at 11:52 a.m.\n");

    else if (time_mins <= (depart3 + depart4) / 2)
            printf("11:19 a.m., arriving at 1:31 p.m.\n");

    else if (time_mins <= (depart4 + depart5) / 2)
            printf("12:47 a.m., arriving at 3:00 p.m.\n");

    else if (time_mins <= (depart5 + depart6) / 2)
            printf("2:00 p.m., arriving at 4:08 p.m.\n");

    else if (time_mins <= (depart6 + depart7) / 2)
            printf("3:45 p.m., ariving at 5:55 p.m.\n");

    else if (time_mins <= (depart7 + depart8) / 2)
            printf("7:00 p.m., arriving at 9:20 p.m.\n");

    else
            printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
