#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

// Crear el puntero cabeza de la lista
node *head = NULL;

// Prototipos de las funciones
node *createNode(int number);
void insertAtEnd(int number);
void insertAtBeg(int number);
void printList();
void freeMemory();

int main()
{
    insertAtEnd(1);
    insertAtEnd(2);
    insertAtEnd(3);

    printList();
    freeMemory();
}

// Función para crear nodos
node *createNode(int number) // Debemos devolver un puntero que apunta al nodo
{
    // Reservar espacio para el nodo
    node *new = malloc(sizeof(node));
    if (new == NULL) // Validar que se pudo reservar el espacio
    {
        printf("Error al reservar la memoria\n");
        exit(1);
    }
    // Asignarle valores a los campos del nodo creado
    new->value = number;
    new->next = NULL;

    // Retornar el nodo creado
    return new;
}

// Función para insertar al final
void insertAtEnd(int number)
{
    // Se manda a llamar a la función crearNodo para crear el nodo a insertar
    node *new_node = createNode(number);

    // Validar si la cabeza de la lista está vacía (no tiene nodos)
    // Si lo está, volvemos al nuevo nodo la cabeza
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    // De lo contrario, insertar al final
    else
    {
        // Para insertar al final, se deberá recorrer la lista enlazada hasta encontrar el final
        node *temp = NULL; // Utilizamos un puntero temporal para recorrer la lista
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        // Dado que al final del bucle while temp apunta al último nodo, se inserta
        // el nuevo nodo a través de su puntero
        temp->next = new_node;
        return;
    }
}

// Función para insertar un nodo al inicio
void insertAtBeg(int number)
{
    node *new_node = createNode(number);
    // Hacer que el nuevo nodo apunte al primer nodo (head apunta al 1er)
    new_node->next = head;
    // Hacer que la cabeza ahora apunte al nuevo nodo creado
    head = new_node;
}

// Función para imprimir la lista enlazada
void printList()
{
    node *temp = head; // Nodo temporar para recorrer la lista
    int counter = 1; // Variable que va enumerando los nodos
    while (temp != NULL)
    {
        printf("Nodo: %d, valor: %d\n", counter, temp->value);
        temp = temp->next; // Pasar al siguiente nodo
        counter++;
    }
    return;
}

// Función para liberar memoria
void freeMemory()
{
    node *cursor = head; // Puntero que guardará temporalmente las direcciones de los nodos
    while (cursor != NULL)
    {
        node *temp = cursor; // Copia la dirección del nodo actual
        cursor = cursor->next; // Cursor avanza al siguiente
        free(temp); // Temp elimina al nodo original
    }
}
