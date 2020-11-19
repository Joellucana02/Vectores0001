#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Una empresa tiene 20 vendedores se ingresan por cada uno el total de unidades
vendidas a lo largo de 15 día. Se quiere saber el total de unidades vendidas, el vendedor
con la mayor venta diaria.*/


    /* Funcionando correctamente
    int i=0, j=0,ve=0, ma=0, num1[2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nIngrese las unidades vendidas hoy: ");
            scanf("%d", &num1[j]);
            ve+=num1[j];
            if(ma<num1[j])
            {
                ma=num1[j];
            }
        }
        printf("El vendedor %d tiene la mayor venta con: %d unidades vendidas", i, ma);
        j=0;
        de=0;

    }
    printf("\nLas unidades totales vendidas son: %d", ve);
    return 0;
    */

     int i=0, j=0,ve=0, ma=0, num1[14];
    for(i=0;i<20;i++)
    {
        for(j=0;j<15;j++)
        {
            printf("\nIngrese las unidades vendidas hoy: ");
            scanf("%d", &num1[j]);
            ve+=num1[j];
            if(ma<num1[j])
            {
                ma=num1[j];
            }
        }
        printf("El vendedor %d tiene la mayor venta con: %d unidades vendidas", i, ma);
        j=0;

    }
    printf("\nLas unidades totales vendidas son: %d", ve);
    return 0;

}
