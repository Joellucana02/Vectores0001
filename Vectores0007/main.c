#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Dadas 15 notas imprimir posición de los alumnos cuya nota sea mayor a 8.*/

    /*Funcionando correctamente

    int num[2], i=0;
    for(i=0;i<3;i++)
    {
        printf("\nIngresar las notas: ");
        scanf("%d", &num[i]);
        if(num[i]>8)
        {
            printf("\nEl alumno %d supera 8 puntos", i);
        }
    }*/

    int num[14], i=0;
    for(i=0;i<15;i++)
    {
        printf("\nIngresar las notas: ");
        scanf("%d", &num[i]);
        if(num[i]>8)
        {
            printf("\nEl alumno %d supera 8 puntos", i);
        }
    }
    return 0;
}
