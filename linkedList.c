#include <stdio.h>
#include <string.h>

int main()
{
   int a=10, b =9 ,c;
   int *p, *q;
   p = &a;
   q = &b;
   c = *p;

   printf("Value of c is = %d\n",c);
    printf("Value of c is = %d\n",*q);
    return 0;
}