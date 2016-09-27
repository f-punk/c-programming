#include <stdio.h>

int main(void)
{
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i * i <= num; i += 2) {
       printf("%d\n", i * i); 
    }

    printf("\n");
    return 0;
}
