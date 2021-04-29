#include <stdio.h>

int main() {
    /* Axel Caballero
    Equipo Los ocho tristes burros
    28 abr 21
    Programa: plantear un problema matemático y resolverlo
    */

    float meses, mensualidad, total;
    meses = 12;
    printf ("\n Compraré un celular iPhone 12 en coppel a 12 meses ¿Cuánto es el monto al terminar de pagar?");
    printf("\n\n Dame el valor de tu abono mensual");
    scanf("%f", &mensualidad);
    total = mensualidad * meses;
    printf("\n\n El monto total al terminar de pagarlo sera: %f", total);
    return 0;
}