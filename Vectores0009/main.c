#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Se ingresa una lista de números distinta de 0, determinar si fueron ingresados de
forma ascendente, descendente o desordenada y mostrar la suma entre el primer y el úl-
timo número ingresado.*/

    //Funcionando correctamente
    int num[3], ar=0, ab=0,i=0, su=0;
    printf("Ingrese cuatro numeros: ");
    for(i=0;i<4;i++)
    {
        scanf("%d", &num[i]);
        if(num[i]!=0)
        {
        }
        else
            {
                printf("Error");
            }
        su= num[0]+num[3];
    }
    for(i=0;i<3;i++)
    {
        if (num[i]<num[i+1])
        {
            ar++;
        }
        else
        {
            if (num[i+1]<num[i])
            {
                ab++;
            }
        }

    }
    if(ar==3)
    {
        printf("Es Ascendente");
    }
    else
    {
        if(ab==3)
        {
            printf("Es Descendente");
        }
        else
        {
            printf("Esta desordenada");
        }
    }


    return 0;
}
