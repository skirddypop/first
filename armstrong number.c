
/*Programme to find if a number is an armstrong number
IITP
LIT2019023*/
#include<stdio.h>
#include<stdlib.h>
 int main()
{
int a,b,s=0,d;
printf("enter the number");
scanf("%d",&a);
d=a;
while(a>0)
{
b=a%10;
s=s+(b*b*b);
a=a/10;
}
if(d==s)
printf("armstrong  number ");
else
printf("not armstrong number");
return 0;
}
