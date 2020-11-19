#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Dados los sueldos de 20 personas mostrar cuantos ganan más de $2000 y cuan-
tos ganan menos de esta suma.*/

    //Funcionando correctamente

    int num[2], i=0, p=0 ,m=0;

    printf("Ingrese su sueldo: ");

    for(i=0;i<3;i++)
    {

        scanf("%d", &num[i]);
        if(2000<num[i])
        {
            p++;
        }
        else
        {
            m++;
        }


    }
    printf("Los que ganan menos son: %d\nLos que ganan mas son: %d", m, p);
    return 0;
}
