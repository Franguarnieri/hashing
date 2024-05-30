//
// Created by River on 29/5/2024.
//

#ifndef HASHING_HASH_H
#define HASHING_HASH_H

#define B 10

void inicializar(char * tablaDeHash[]);
int hash(const char * llave);
void insertarEnTablaDeHash(char * tablaDeHash[], const char * llave);
int miembro(char * tablaDeHash[], const char * llave);
void imprimir(char * tablaDeHash[]);
void imprimirEsMiembro(char * tablaDeHash[], const char * llave);


#endif //HASHING_HASH_H
