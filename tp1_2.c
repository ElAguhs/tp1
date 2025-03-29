#include <stdio.h>
#include <math.h>

int cuadradoNumero1(int numero);

void cuadradoNumero2(int *p);

void direccionyContenido(int *p);

int main()
{

    int numero;

    printf("Ingrese un numero entero\n");
    scanf("%d", &numero);

    int cuadrado = cuadradoNumero1(numero);

    printf("El cuadrado de %d es %d\n", numero, cuadrado);

    cuadradoNumero2(&numero);

    direccionyContenido(&numero);

    return 0;
}

int cuadradoNumero1(int numero)
{

    int cuadrado = numero * numero;
    return cuadrado;
}

void cuadradoNumero2(int *p)
{
    *p *= *p;
    printf("El cuadrado del numero despues del void: %d\n", *p);
}

void direccionyContenido(int *p)
{

    printf("La direccion de la variable:%p\nEl contenido de la variable %d\n", p, *p);
}
