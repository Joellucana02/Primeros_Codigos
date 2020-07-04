#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hor=0,su=0;
    char cat;
      printf("ingrese categoria ");
    scanf("%c",&cat);
    printf("ingrese horas trabajadas ");
    scanf("%d",&hor);
    if (cat=='a')
    {
        su= hor*200;
    }
    else
    {
        if (cat=='b')
        {
            su= hor*180;
        }
        else
        {
            if (cat=='c')
            {
                su= hor*150;
            }
            else
            {
                su=0;
            }
        }
    }
    printf("sueldo ganado %d ",su);

    return 0;
}
