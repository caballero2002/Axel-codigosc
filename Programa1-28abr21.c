#include <stdio.h>

int main() {
    /* Axel Caballero
    Equipo Los ocho tristes burros
    28 abr 21
    Programa: plantear un problema matemático y resolverlo
    */

    float refresco, tortillas, frijoles, sobrante, dinero, total;
    dinero = 100;
    printf ("\n Mi mamá me dió $100 para comprar 1 refresco, 1kg de tortilla y 1kg de frijoles ¿Cuánto dinero me tiene que sobrar?");
    printf("\n\n Dame el valor del refresco");
    scanf("%f", &refresco);
    printf("\n Dame el valor de las tortillas");
    scanf("%f", &tortillas);
    printf("\n Dame el valor de los frijoles");
    scanf("%f", &frijoles);
    total = frijoles + refresco + tortillas;
    sobrante = dinero - total;
    printf("\n\n El dinero que debe sobrarte es: %f", sobrante);
    return 0;
}