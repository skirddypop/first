
/*Programme to find sum of digits of a number
IITP
LIT2019023*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s=0;
    printf("\n Enter any 4 digit number");
   scanf("%d",&a);
   while(a>0)
   {
       b=a%10,
       s=s+b,
       a=a/10;
   }
   printf("sum of digits is %d",s);
return(0);
}
