#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escribir un programa que muestre la secuencia Fibonacci: 1,1,2,3,5,8,13,21,34,55*/
    //Funcionado correctamente

    int i=1, n=0, o = 0, o1 = 1, s;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        printf("%d,", o);
        s = o + o1;
        o = o1;
        o1 = s;
    }

    return 0;
}
