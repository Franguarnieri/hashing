#include <stdio.h>
#include "hash.c"


int main(void) {
    char * tablaDeHash[B];

    inicializar( tablaDeHash );

    insertarEnTablaDeHash(tablaDeHash, "Enrique");
    insertarEnTablaDeHash(tablaDeHash, "Juan");
    insertarEnTablaDeHash(tablaDeHash, "Hernan");
    insertarEnTablaDeHash(tablaDeHash, "Martin");
    insertarEnTablaDeHash(tablaDeHash, "Esteban");
    insertarEnTablaDeHash(tablaDeHash, "Carlos");
    insertarEnTablaDeHash(tablaDeHash, "Jimena");
    insertarEnTablaDeHash(tablaDeHash, "Sofia");
    insertarEnTablaDeHash(tablaDeHash, "Belen");

    imprimir(tablaDeHash);

    imprimirEsMiembro(tablaDeHash, "Hernan");
    imprimirEsMiembro(tablaDeHash, "Esteban");
    imprimirEsMiembro(tablaDeHash, "Debora");
    imprimirEsMiembro(tablaDeHash, "Belen");
    imprimirEsMiembro(tablaDeHash, "Sofia");
    imprimirEsMiembro(tablaDeHash, "Jimena");
    imprimirEsMiembro(tablaDeHash, "Juan");

    return 0;
}

