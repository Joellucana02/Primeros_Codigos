#include <stdio.h>
#include <stdlib.h>

int main()
{
    int su;
    int cat;
    int k;
    int su2;
    int k1;
    int su1;
    printf("ingrese su sueldo");
    scanf("%d",&su);
    printf("ingrese su cantidad de hijos");
    scanf("%d",&k);
    printf("ingrese su categoria");
    scanf("%d",&cat);
    if (cat==1)
    {
        su = su+(su*10/100);

            if (k>4)
            {
                k1 = k-4;
                su1 = k1*200;
                su2 = su1 + ((k-k1)*300);
            }
            else
                {su2 = k*300;
                }
        }

    else
    {
        if (cat ==2)
            su= su + (su*20/100);

            if (k>4)
            {
                k1 = k-4;
                su1 = k1*200;
                su2 = su1 + ((k-k1)*300);
            }
            else
            {
                su2 = k*300;
            }

    }
    su = su + su2;
    printf("tu sueldo es \n%d",su);
    return 0;
}
