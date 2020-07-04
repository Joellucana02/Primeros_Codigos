#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0;
    printf("ingrese tres valores ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a<b)
    {
        if (b<c)
        {
            printf("Es ascendente ");
        }
    }

    return 0;
}
