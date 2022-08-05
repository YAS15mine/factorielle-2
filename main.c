#include <stdio.h>
#include <stdlib.h>


   int fact (int a)
 {   int f,i;
        f=1;
     for (i=1;i<=a;i++)
        f=f*i;

    return f;

 }
int main ()
{
    int n ;
    do {
    printf("entrer un nombre: \n ");
    scanf ("%d" ,&n);

    } while (n<0);
    printf("le resultat de %d! est %d \n",n,fact(n));

}

