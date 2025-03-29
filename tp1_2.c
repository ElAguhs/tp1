#include <stdio.h>
#include <math.h>

int cuadradoNumero(int numero);

int main()
{

    int numero;

    printf("Ingrese un numero entero\n");
    scanf("%d", &numero);

    int cuadrado = cuadradoNumero(numero);

    printf("El cuadrado de %d es %d\n", numero, cuadrado);

    return 0;
}

int cuadradoNumero(int numero)
{

    int cuadrado = numero * numero;
    return cuadrado;
}