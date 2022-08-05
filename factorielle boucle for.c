#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,f,i;
    f =1;
    printf("entrer un nombre \n");
    scanf ("%d",&x);
    if (x<0)
        printf("le nombre n'est pas acceptable ");
    else
    for (i=1;i<=x;i++){
            f=i*f;

    }
    printf ("la factorielle est %d ",f);
    return 0;
}
