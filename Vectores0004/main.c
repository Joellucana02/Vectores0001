#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Un curso tiene 30 alumnos identificados con números del 1 al 30 por cada alumno
se ingresa una nota, calcular el promedio general del curso.*/

    //Funcionando correctamente
    int alu[29],i=0;
    float pro=0;

    printf("Ingrese las notas de los 30 alumnos: ");
    for(i=0; i<30; i++)
    {
        scanf("%d", &alu[i]);
        pro+=alu[i];
    }
    pro= (pro/30);
    printf("El promedio general del curso es: %.3f", pro);
    return 0;
}
