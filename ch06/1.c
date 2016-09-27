#include <stdio.h>

int main(void)
{
    float num, largest;
    largest = 0.00;
    
    while (num != 0) {
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num > largest)
            largest = num;
    }

    printf("The largest number entered was %.2f", largest);
    printf("\n");

    return 0;
}
