#include <stdio.h>
#include <stdlib.h>


    /*Calcular la resistencia total de 5 resistencias en serie cargadas en un vector, mos-
trar cada una de ellas y la resistencia total.*/

int resistencia_total(int res[4], int i);

int main()
{

    //Funcionando correctamente
    int i=0, res[4];

    printf("La suma total de las resistencias es: %d", resistencia_total(res[4], i));
    return 0;
}
int resistencia_total(int res[4], int i)
{
    for(i;i<5;i++)
    {
        printf("Ingrese el valor de una resistencia: ");
        scanf("%d",&res[i]);
    }
    int resistencia_total= res[0]+res[1]+res[2]+res[3]+res[4];
    return resistencia_total;
}
