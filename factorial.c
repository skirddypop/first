
/*Programme to print factorial of any number N
IITP
LIT2019023*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,f=1;

    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;--i)
    {
        f=f*i;
    }
    printf("%d",f);
    return(5);
}
