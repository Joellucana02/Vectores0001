#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Realice un algoritmo que cargue un vector con 10 elementos y determine la suma
y el producto de todos los elementos del vector. Además, calcule el promedio de los ele-
mentos del vector y determine cuantos de los elementos del vector está por debajo del
promedio. Imprima la suma, el producto, el promedio y la cantidad de elementos que es-
tán por debajo del promedio.*/

    //Funcionando correctamente

    int v[9], su=0,p=1 , e=0, i=0;
    float pro=0;

    printf("Ingrese 10 numeros: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&v[i]);
        su+=v[i];
        p=(p*v[i]);
    }
    pro= (su/10);
    for(i=0;i<10;i++)
    if(v[i]<pro)
    {
        e++;
    }
    printf("La suma total es: %d\nEl producto total es: %d\nEl promedio es: %.3f\nLa cantidad de elementos debajo del promedio es: %d", su, p, pro, e);
    return 0;
}
