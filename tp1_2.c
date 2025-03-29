#include <stdio.h>
#include <math.h>

int cuadradoNumero1(int numero);

void cuadradoNumero2(int *p);

void direccionyContenido(int *p);

void invertirValores(int *num1, int *num2);

int main()
{

    int numero;

    printf("Ingrese un numero entero\n");
    scanf("%d", &numero);

    int cuadrado = cuadradoNumero1(numero);

    printf("El cuadrado de %d es %d\n", numero, cuadrado);

    cuadradoNumero2(&numero);

    direccionyContenido(&numero);

    printf("El valor del 1er numero.\n");

    int numero2, numero3;

    scanf("%d", &numero2);

    printf("El valor del 2do numero.\n");

    scanf("%d", &numero3);

    invertirValores(&numero2, &numero3);

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

void invertirValores(int *num1, int *num2)
{

    printf("Valor del 1er numero:%d\nValor del 2do numero:%d\n", *num1, *num2);

    int numero1 = *num2;

    int numero2 = *num1;

    printf("Valor del 1er numero invertido:%d\nValor del 2do numero invertido:%d\n", numero1, numero2);


}
