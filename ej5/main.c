#include <stdio.h>
#include <stdlib.h>

int main()
{
    int imc;
    int p;
    float al;
    printf("ingrese su peso y altura ");
    scanf("%d",&p);
    scanf("%f",&al);
    imc = p/(al*al);
    if (imc<20)
    {
        printf("tu peso es menor que el normal");
    }
    else
    {
        if(imc<25)
        {
            printf("tienes el peso ideal");
        }
        else
        {
            printf("tienes sobrepeso");
        }
    }
}
