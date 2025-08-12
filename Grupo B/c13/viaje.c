#include <stdio.h>
#include <stdlib.h>

typedef struct Vagon
{
    int pasajeros;
    struct Vagon *sig;
} Vagon;

typedef struct Tren
{
    Vagon *cabeza;
} Tren;

Vagon *crear_vagon(int pasajeros);
void insertar_final(Tren *tren, int pasajeros);
void imprimir_pasajeros(Tren *tren);
void eliminar_vagones(Tren *tren);

int main(void)
{
    Tren *thomas = malloc(sizeof(Tren));
    if (thomas == NULL)
        return 1;

    thomas->cabeza = NULL;

    for (int i = 1; i <= 10; i++)
        insertar_final(thomas, i + 100);

    printf("Pasajeros por vagon:\n");
    imprimir_pasajeros(thomas);
    eliminar_vagones(thomas);
    free(thomas);

    return 0;
}

Vagon *crear_vagon(int pasajeros)
{
    Vagon *nuevo_vagon = malloc(sizeof(Vagon));
    if (nuevo_vagon == NULL)
        exit(1);

    (*nuevo_vagon).pasajeros = pasajeros;
    nuevo_vagon->sig = NULL;

    return nuevo_vagon;
}

void insertar_final(Tren *tren, int pasajeros)
{
    Vagon *nuevo_vagon = crear_vagon(pasajeros);
    if (tren->cabeza == NULL)
    {
        tren->cabeza = nuevo_vagon;
        return;
    }

    Vagon *vagon_temp = tren->cabeza;
    while (vagon_temp->sig != NULL)
        vagon_temp = vagon_temp->sig;

    vagon_temp->sig = nuevo_vagon;
}

void imprimir_pasajeros(Tren *tren)
{
    Vagon *vagon_temp = tren->cabeza;
    int cont = 0;

    while (vagon_temp != NULL)
    {
        printf("Vagon %i: %i\n", cont, vagon_temp->pasajeros);
        cont++;
        vagon_temp = vagon_temp->sig;
    }
}

void eliminar_vagones(Tren *tren)
{
    Vagon *actual = tren->cabeza;

    while (actual != NULL)
    {
        Vagon *siguiente = actual->sig;
        free(actual);
        actual = siguiente;
    }
}
