#include <stdio.h>

int main() {
    /* Axel Caballero
    Equipo Los ocho tristes burros
    28 abr 21
    Programa: plantear un problema matemático y resolverlo
    */

    float dieta, peso, semanas, total, pesototal, bajar;
    dieta = 10;
    bajar = 0.5;
    printf ("\n Me propuse a bajar 10kg con una dieta en internet y dice que cada semana si la hago al pie de la letra bajaría 0.5 kg \n\n¿En cuántas semanas bajaría los 10kg?");
    printf("\n¿Cuál será mi peso si la sigo haciendo por 4 semanas mas?");
    printf("\n\n\n¿Cuál es tu peso?");
    scanf("%f", &peso);
    semanas = dieta / bajar;
    total = peso - (semanas * bajar);
    pesototal = total - (4 * bajar);
    printf("\n Las semanas en que bajarás los 10kg son: %f", semanas);
    printf("\n\n El peso al cumplir 4 semanas más será: %f", pesototal);
    return 0;
}