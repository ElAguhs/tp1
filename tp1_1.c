#include <stdio.h>

int main()
{

    printf("Hola mundo\n");

    int *p, numero = 5;

    p = &numero;



    printf("Contenido puntero: %d \nDireccion de memoria almacenada por el puntero: %p\nDireccion de memoria de la variable:%p\nDireccion de memoria del puntero: %p\nTamano de memoria utilizada por la variable numero:%d\n",
     *p, p,&numero,&p ,sizeof(numero) );

    return 0;
}