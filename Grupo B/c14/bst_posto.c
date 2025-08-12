#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
typedef struct Nodo
{
    int dato;
    struct Nodo *izq;
    struct Nodo *der;
} Nodo;

// Función para crear un nuevo nodo
Nodo *crearNodo(int valor)
{
    Nodo *nuevo = (Nodo *) malloc(sizeof(Nodo));
    if (nuevo == NULL)
    {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
    nuevo->dato = valor;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;
}

// Insertar en el árbol binario 
Nodo *insertar(Nodo *raiz, int valor)
{
    if (raiz == NULL)
    {
        return crearNodo(valor);
    }
    if (valor < raiz->dato)
    {
        raiz->izq = insertar(raiz->izq, valor);
    }
    else if (valor > raiz->dato)
    {
        raiz->der = insertar(raiz->der, valor);
    }
    return raiz; // No se permiten duplicados
}

// Recorrido postorden (izquierda, derecha, raíz)
void postorden(Nodo *raiz)
{
    if (raiz != NULL)
    {
        postorden(raiz->izq);
        postorden(raiz->der);
        printf("%d ", raiz->dato);
    }
}

// Liberar memoria
void liberar(Nodo *raiz)
{
    if (raiz != NULL)
    {
        liberar(raiz->izq);
        liberar(raiz->der);
        free(raiz);
    }
}

int main()
{
    Nodo *raiz = NULL;

    // Insertar datos
    raiz = insertar(raiz, 4);
    raiz = insertar(raiz, 6);
    raiz = insertar(raiz, 2);
    raiz = insertar(raiz, 3);
    raiz = insertar(raiz, 1);
    raiz = insertar(raiz, 7);
    raiz = insertar(raiz, 5);

    printf("Recorrido postorden: ");
    postorden(raiz);
    printf("\n");

    liberar(raiz);
    return 0;
}
