#include <stdio.h>

int main()
{
    /* Axel Caballero
    Equipo Los ocho tristes burros
    3 Mayo 21
    Programa: plantear un problema matemático y resolverlo
    */

    float costo, sillas, mesas, valors, valorm, costo1, total;
    printf("Mi mamá quiere organizar una comida familiar algo grande, pero necesita saber cuánto es el presupuesto de dinero que debe tener para las mesas y sillas");
    printf("\n\nBienvenido a alquiladora Andy");
    printf("\n¿Cuantas sillas necesita?");
    scanf("%f", &sillas);
    printf("\n¿Cuántas mesas necesitas?");
    scanf("%f", &mesas);
    valors = 25;
    valorm = 40;
    costo = valors * sillas;
    costo1 = valorm * mesas;
    printf("\n El valor de las sillas es de: %f", costo);
    printf("\n El valor de las mesas es de: %f", costo1);
    total = costo + costo1;
    printf("\n El precio final es de: %f", total);
    return 0;
}