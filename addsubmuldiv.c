/*Programme to take in value of 2 numbers n1&n2 and conduct the operation of addition,multiplication,subtraction and division
IITP Lab 1
21/8/2019
LIT2019023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum,sub,mul;
    float div;
    printf("enter any two integers n1&n2\n");
    scanf("%d %d",&n1,&n2);

    sum=n1+n2; sub= n1-n2; div=n1/n2; mul=n1*n2;
    printf("\n %d+%d=%d,\n %d-%d=%d,\n %d*%d=%d,\n %d/%d=%f",n1,n2,sum,n1,n2,sub,n1,n2,mul,n1,n2,div);
    return(5);
}
