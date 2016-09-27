#include <stdio.h>

int main(void)
{
    int m, n, remainder, num, denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &m, &n);

    num = m;
    denom = n;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    printf("In lowest terms: %d/%d", num / m, denom / m);
    printf("\n");

    return 0;
}
