//
// Created by River on 29/5/2024.
//

#include "hash.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>

int hash(const char *llave) {
    int suma = 0;

    for (int i = 0; llave[i] != '\0'; ++i) {
        suma += llave[i];
    }

    return suma%B;
}

void inicializar(char *tablaDeHash[B]) {

    for (int i = 0; i < B; ++i) {
        tablaDeHash[i]= NULL;
    }

}

void insertarEnTablaDeHash(char * tablaDeHash[B], const char *llave) {

    int clase = hash( llave );

    if ( tablaDeHash[clase] != NULL ) {
        printf("Hay una colisión para la llave %s\n", llave); /** acá debería venir la lógica de redispersión */
    } else {
        tablaDeHash[clase] = malloc(sizeof(strlen(llave)) + 1);
        strcpy(tablaDeHash[clase], llave);
    }

}

/** 0 en caso de que sea miebro, 1 caso contrario */
int miembro(char *tablaDeHash[B], const char *llave) {
    int clase = hash(llave);

    if ( tablaDeHash[clase] != NULL && strcmp(llave, tablaDeHash[clase]) == 0 ) {
        return 0;
    }

    return 1;
}

void imprimir(char *tablaDeHash[B]) {

    printf("Impresión tabla de hash: \n");

    for(int i = 0; i<B; i++) {
        if ( tablaDeHash[i] == NULL ) {
            printf("La Clase %d no tiene elementos\n", i+1);
        } else {
            printf("Clase %d: %s\n", i+1, tablaDeHash[i]);
        }
    }

}

void imprimirEsMiembro(char **tablaDeHash, const char *llave) {

    if(miembro(tablaDeHash, llave) == 0){
        printf("La llave %s es miembro\n", llave);
    } else {
        printf("La llave %s NO es miembro\n", llave);
    }

}