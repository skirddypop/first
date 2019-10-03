
/*Programme to reverse the digits
IITP
LIT2019023*/
#include <stdio.h>
#include <conio.h>

 int main()
{
int a, s=0, r;
printf("Enter a number");
  scanf("%d", &a);
  while(a>0)
  {
     r=a%10;
     s=s*10+r;
     a=a/10;
  }
  printf("Reversed Number: %d",s);
return 0;
}
