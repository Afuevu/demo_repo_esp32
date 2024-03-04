#include <stdio.h>
#include <string.h>

int main()
{
   int a=33, b =9;
   int *p, *q;
   p = &a;
   q = &b;
   *q = *p;


   printf("Value of a is = %d %d %d\n",a,*p,*q);
    
    return 0;
}