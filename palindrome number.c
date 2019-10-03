
/*Programme to check if a number is a palindrome number
IITP
LIT2019023*/
#include<stdio.h>
#include<stdlib.h>>
int main()
{
int a,b,s=0,c;
printf("enter the number=");
scanf("%d",&a);
c=a;
while(a>0)
{
b=a%10;
s=(s*10)+b;
a=a/10;
}
if(c==s)
printf("palindrome number ");
else
printf("not palindrome");
return 0;
}
