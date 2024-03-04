#include <stdio.h>
#include <string.h>

int main()
{
   int a=10;
   int *p  = &a;
   int **q = &p;
   int ***r = &q;

   printf("Value of a is = %d\n",a);
    printf("Value of a is = %d\n",*p);
     printf("Value of a is = %d\n",*(*q));
     printf("Value of a is = %d\n",*(*(*r)));
      printf("adress of q is = %x\n",r);
    return 0;
}