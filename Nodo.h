#ifndef _NODO_H_
#define _NODO_H_

typedef int Dato;
typedef int Bool;  // Definimos el tipo Bool como un alias de int

typedef struct NODO {
    Dato dato;
    struct NODO* Sig;
} NODO;

NODO* Crear_nodo();
Bool Borrar_nodo(NODO* n);
void Asignar_Dato(NODO* n, Dato dato);
Dato Obtener_Dato(NODO* n);
NODO* Asignar_Ref(NODO* n1, NODO* n2);
NODO* Obtener_Ref(NODO* n);

#endif
