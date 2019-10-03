/*Programme to take in value of 3 numbers n1,n2,n3 and conduct the operation n4=n1-n2+n3
IITP Lab 1
21/8/2019
LIT2019023*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1,n2,n3,sum;
    printf("enter the numbers n1, n2, n3 \n");
    scanf("%d %d %d", &n1,&n2,&n3);
    sum=n1-n2+n3;
    printf("answer of %d , %d and %d is %d", n1,n2,n3,sum);
    return(4);
}
