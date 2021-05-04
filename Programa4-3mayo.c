#include <stdio.h>

int main()
{
    /* Axel Caballero
    Equipo Los ocho tristes burros
    3 Mayo 21
    Programa: plantear un problema matemático y resolverlo
    */

    int opcion, vasos, valor1, valor2, valor3, docenas, refrescos, refrescos1, huevo, huevo1;
    valor1 = 21;
    valor2 = 30;
    valor3 = 20;
    printf("Mi mamá me mandó a investigar los precios de algunos productos que venden en la tienda para ver cuánto es lo que va a pagar por los mismos");
    printf("\nQue tal tienda San Marcos, ¿de que producto necesitas el precio?");
    printf("\n1. Vasos");
    printf("\n2. Refresco");
    printf("\n3. Kg de Huevo\n");
    scanf("%i", &opcion);

    switch (opcion)
    {
    case 1:
        printf("\nlos vasos cuestan $21 la docena");
        printf("\n ¿Cuántas docenas necesitas?");
        scanf("%i", &vasos);
        docenas = vasos * valor1;
        printf("El precio total sería, %i", docenas);
        break;
    case 2:
        printf("\n El refresco vale 30$ c/u");
        printf("\n ¿Cuántos refrescos necesitas?");
        scanf("%i", &refrescos);
        refrescos1 = refrescos * valor2;
        printf("\n El costo seria de: %i", refrescos1);
        break;
    case 3:
        printf("\n El kg de Huevo vale 20$");
        printf("\n ¿cuántos kg de huevo necesitas?");
        scanf("%i", &huevo);
        huevo1 = huevo * valor3;
        printf("\n El costo seria de: %i", huevo1);
        break;

    }
    return 0;
}