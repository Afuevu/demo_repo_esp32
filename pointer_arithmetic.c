#include <stdio.h>
#include <string.h>

int main()
{
   int a[5] = {10, -1, 5, 10, 25};
   int *p = &a;
   p = p + 3;
   
   printf("value of a = %d\n",*a);
   printf("value of a = %d\n",*p);
    return 0;
}