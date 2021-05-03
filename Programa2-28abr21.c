#include <stdio.h>

int main()
{
    /* Axel Caballero
    Equipo Los ocho tristes burros
    28 abr 21
    Programa: plantear un problema matemático y resolverlo
    */

    float kilometros, semanas, total, semana;
    printf ("\n Un amigo y yo nos propusimos a correr 5.25km por día queremos calcular los kilómetros recorridos por semanas");
    printf("\n ¿Cuántos semanas han estado corriendo?");
    scanf("%f", &semanas);
    kilometros = 5.25;
    semana = 7;
    total = kilometros * (semana * semanas);
    printf("Los kilómetros recorridos por semanas son: %f", total);
    return 0;
}
