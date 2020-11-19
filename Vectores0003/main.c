#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Se ingresan dos números por teclado, cargar en un vector todos los números in-
termedios y mostrarlo por pantalla.*/

    //Funcionando correctamente

    int num[1], i=0, k=0, j=0, l=0;

        printf("Ingrese dos numeros: ");

        for(i=0; i<2; i++)
        {
            scanf("%d", &num[i]);
        }

            if(num[0]<num[1])
            {
              k =  num[1];
              j = (k-num[0])-1;
              l =  num[0]+1;
            }
            else
            {
                k =  num[0];
                j = (k-num[1])-1;
                l =  num[1]+1;

            }
        for(i=0;i<j;i++)
        {
            printf("\n%d", l++);
        }

    return 0;
}
