#include "Nodo.h"
#include <stdio.h>
#include <stdlib.h>  // Para malloc y free

NODO* Crear_nodo(){
    NODO* nuevo = (NODO*)malloc(sizeof(NODO));
    if (nuevo == NULL) {  // Verificación de si malloc falló
        printf("Error al asignar memoria para el nodo.\n");
        return NULL;
    }
    nuevo->Sig = NULL;
    nuevo->dato = 0;
    return nuevo;
}

Bool Borrar_nodo(NODO* n){
    if (n == NULL) {
        return false;  // Si el nodo es NULL, no se puede borrar
    }
    if (n->Sig == NULL) {
        free(n); 
        return true;
    }
    return false;  
}

void Asignar_Dato(NODO* n, Dato dato) {
    if (n != NULL) {
        n->dato = dato;
    }
}

Dato Obtener_Dato(NODO* n) {
    if (n != NULL) {
        return n->dato;
    }
    return -1;  // O valor que tenga sentido indicar que el nodo es NULL
}

NODO* Asignar_Ref(NODO* n1, NODO* n2) {
    if (n1 != NULL) {
        n1->Sig = n2; 
    }
    return n1;  
}

NODO* Obtener_Ref(NODO* n) {
    if (n != NULL) {
        return n->Sig;  
    }
    return NULL;  
}