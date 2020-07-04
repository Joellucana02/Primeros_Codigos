#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,c=0;
    printf("ingrese tres valores ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a==b)
    {
        if(a==c)
        {
            printf("todos son iguales ");
        }
        else
        {
            if(a!=c)
            {
                printf("%d y %d son iguales pero no %d",a,b,c);
            }
        }
    }
    else
    {
        if (b==c)
        {
            if (a!=b)
            {
                printf("%d y %d son iguales pero no %d",b,c,a);
            }
        }
        else
        {
            if (a==c)
            {
                if (c!=b)
                {
                    printf("%d y %d son iguales pero no %d",a,c,b);
                }
            }
            else
            {
                if (a!=b)
                {
                    if (b!=c)
                    {
                        if (c!=a)
                        {
                            printf("todos son diferentes");
                        }
                    }
                }
            }
        }
    }
    return 0;
}
