#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Ingresar 5 números y encontrar el valor promedio y cuál es el mayor de los núme-
ros ingresados.*/


    //Funcionando correctamente
    int num[4], ma=0, i=0;
    float pro;
    printf("Ingrese 5 numeros: ");
    for (i=0; i<5; i++)
    {
        scanf("%d", &num[i]);
        pro+=num[i];
    }
    for (i=0; i<5; i++)
    {
        if(num[i]>num[0])
        {
            ma= num[i];
        }
    }
    pro = (pro/5);
    printf("El promedio es: %.3f\nEl mayor es: %d",pro, ma);

    return 0;
}
