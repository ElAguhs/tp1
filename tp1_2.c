#include <stdio.h>
#include <math.h>

int cuadradoNumero1(int numero);

void cuadradoNumero2(int *p);

void direccionyContenido(int *p);

void invertir(int *a, int *b);

void orden(int *a, int *b);

void  mostrarValor();

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

    invertir(&numero2, &numero3);

    orden(&numero2, &numero3);

    mostrarValor();

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

void invertir(int *a, int *b)
{

    printf("Valor del 1er numero:%d\nValor del 2do numero:%d\n", *a, *b);

    int numero1 = *b;

    int numero2 = *a;

    printf("Valor del 1er numero invertido:%d\nValor del 2do numero invertido:%d\n", numero1, numero2);


}


void orden(int *a, int *b){

    if (*a > *b)
    {
       printf("Numeros ordenados de menor a mayor: %d,%d\n", *b, *a);
    }else{
        printf("Numeros ordenados de menor a mayor: %d,%d\n", *a, *b);
    }
    
}


 void mostrarValor(){

 int numero1, numero2;

    printf("Ingrese 2 valores.\n");

    scanf("%d", &numero1);

    scanf("%d", &numero2);

    printf("Los valores ingresados son: %d,%d\n", numero1, numero2);

 }