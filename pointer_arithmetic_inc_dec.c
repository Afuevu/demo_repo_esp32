#include <stdio.h>
#include <string.h>

int main()
{
    int a[5] = {10, -1, 5, 10, 25};
    int *b = a;
    

    printf("value of b  = %d\n", *b);
    b++;
    printf("value of b = %d\n", *b);
    printf("value of c = %d\n", *++b);
   
    printf("value of b = %d\n", *b);
   
    return 0;
}