#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h=0,m=0,s=0,u=0,s2=0,s1=0,m2=0;
    float m1=0,h1=0,h2=0,h3=0,fi=0;
    printf("ingrese hora, minuto y segundo ");
    scanf("%d",&h);
    scanf("%d",&m);
    scanf("%d",&s);
    printf("ingrese unidad final ");
    scanf("%d",&u);
    if (u==1)
    {
        s1=m*60;
        s2=h*3600;
        fi=s+s1+s2;
        printf("son %.2f segundos",fi);
    }
    else
    {
        if (u==2)
        {
            m1=s/60;
            m2=h*60;
            fi=m+m1+m2;
            printf("son %.2f minutos",fi);
        }
        else
        {
            if (u==3)
            {
                h1=s/60;
                h3=h1/60;
                h2=m/60;
                fi=h+h3+h2;
                printf("son %.2f horas",fi);
            }
        }

    }

    return 0;
}
