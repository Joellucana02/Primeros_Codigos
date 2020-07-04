#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pob=0,pob1=0,pob2=0,sup=0,sup1=0,sup2=0;
    float den=0,den1=0,den2=0;
    printf("ingresa poblacion y superficie ");
    scanf("%d",&pob);
    scanf("%d",&sup);
    printf("ingresa poblacion y superficie ");
    scanf("%d",&pob1);
    scanf("%d",&sup1);
    printf("ingresa poblacion y superficie ");
    scanf("%d",&pob2);
    scanf("%d",&sup2);
    den = pob/sup;
    den1 = pob1/sup1;
    den2 = pob2/sup2;
    if (den>den1)
    {
        if (den>den2)
        {
            printf("el pais con %d poblacion , %d superficie y %.2f densidad",pob,sup,den);
        }
        else
        {
                        printf("el pais con %d poblacion y %d superficie y %.2f",pob2,sup2,den2);
        }
    }
    else
    {
        if (den1>den2);
        {
        if (den>den2)
        {
            printf("el pais con %d poblacion , %d superficie y %.2f densidad",pob1,sup1,den1);
        }
        else
        {
            printf("el pais con %d poblacion y %d superficie y %.2f",pob2,sup2,den2);
        }
        }
    }
    printf("\nEs el mas densamente poblado ");

    return 0;
}
