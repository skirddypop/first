
/*Programme to check if a number is prime or not
IITP
LIT2019023*/
#include <stdio.h>
#include <conio.h>

int main()
{
  int a, i, b = 0;
  printf("Enter any number n:");
  scanf("%d", &a);

  for (i = 2; i <a; i++)
    {
      if (a%i == 0)
      {
          printf("n is not a prime number");
        i=a-1;
          b++;
      }

  }
  if (b == 0) {
  printf("n is a Prime number");
  }

  return 0;
}

