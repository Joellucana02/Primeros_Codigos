#include <stdio.h>
#include <stdlib.h>


int main()
{
    int des=30,des1=20,des2=50,imp=33,edad=0;
    float to=0,to1=0,tof=0;
    printf("ingrese su edad ");
    scanf("%d",&edad);
    if (edad<50)
    {
        printf("usted no aplica ");
    }
    else
    {
        if (edad<60)
        {
            to= 50- (50*des1/100);
            to1= to*imp/100;
            tof= to1 + to;
        }
        else
        {
            if (edad<70)
            {
                   to= 50- (50*des/100);
            to1= to*imp/100;
            tof= to1 + to;
            }
            else
            {
                   to= 50- (50*des2/100);
            to1= to*imp/100;
            tof= to1 + to;
            }
        }
    }
    printf("Importe total con impuestos %.2f\nImporte sin impuestos %.2f",tof,to);
    return 0;

}
