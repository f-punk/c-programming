#include <stdio.h>

int main(void)
{
    int a, b, c, d, largest, smallest;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b) {
        largest = a;
        smallest = b;
    }
    else {
        largest = b;
        smallest = a;
    }
    
    if (c > largest)
        largest = c;
    else if (c < smallest)
        smallest = c;

    if (d > largest)
        largest = d;
    else if (d < smallest)
        smallest = d;

    printf("Largest : %d\nSmallest : %d\n", largest, smallest);
        
    return 0;
}
