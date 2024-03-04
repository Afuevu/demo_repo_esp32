#include <stdio.h>
#include <string.h>

int main()
{
    int a[5] = {10, -1, 5, 10, 25};
    int *b = a;
    int *c = &a[3];

    printf("value of b - c = %d\n", b - c);
    printf("value of c - b = %d\n", c - b);
    printf("value of c = %d\n", *c);
    c = c - 2;
    printf("value of c = %d\n", *c);
     printf("value of c again= %d\n", *c);
    c = c - 2;
    return 0;
}