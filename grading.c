
/*Programme to give grade according to marks
IITP
LIT2019023*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    printf("\n enter your percentage");
    scanf("%d",&a);

    if (a>=95)
    {
        printf("A+");
    }
    else if (a>=85)
    {
     printf("A");
    }
    else if (a>=75)
    {
     printf("B");
    }


    else if (a>=75)
    {
     printf("B+");
    }

    else if (a>=65)
    {
     printf("B");
    }

    else if (a>=55)
    {
     printf("C");
    }

    else if (a>=45)
    {
     printf("D");
    }

    else if (a>=33)
    {
     printf("E");
    }

    else (a>=0)
    {
     printf("FAIL");
    }

}
