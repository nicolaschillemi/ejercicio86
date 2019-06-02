#include <stdio.h>

int main() {

    char consfinal='A', ivadisc='B', iva50='C', respuesta=' ';
    int precio;

    printf("Ingrese el precio del producto: ");
    scanf("%i",&precio);
    fflush(stdin);

    printf("\nElegir A para consumidor final, B para iva discriminado y C para iva al 50%: ");
    scanf("%c",&respuesta);
    fflush(stdin);

    if (respuesta==consfinal){
        printf("\nConsumidor final / $%i",precio + (precio * 21/100));
    }

    else if (respuesta==ivadisc){
        printf("\nIva Discriminado / Producto $%i / IVA $%i / Total $%i",precio,precio * 21/100,precio + (precio * 21/100));
    }

    else printf("\nIVA al 50% / Producto $%i / IVA $%i / Total $%i",precio,precio * 50/100,precio + (precio * 50/100));

    return 0;
}