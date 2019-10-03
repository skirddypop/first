
/*Programme to print factorial of any number N
IITP
LIT2019023*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,n,f=1;

    printf("\n enter a number");
    scanf("%lf",&n);
    for(i=n;i>=1;--i)
    {
        f=f*i;
    }
    printf("%lf",f);
    return(5);
}
