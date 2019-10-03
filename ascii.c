
/*Programme to write ascii values of each character
IITP
LIT2019023*/
#include <stdio.h>
#include <stdlib.h>

void main()

{
    int i;








    for(i=255;i>=0;i--)
    {
        printf("%d =%c \n", i,i );
        if (i%20==0)
        getch();
    }
}
