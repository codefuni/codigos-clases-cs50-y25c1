#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define TABLE_SIZE 26
#define WORD_SIZE 50

typedef struct nodo
{
    char word[WORD_SIZE];
    struct nodo *next;
} nodo;

nodo *hash_table[TABLE_SIZE] = {NULL};

int hash(const char *word);
void insert(const char *word);
bool search(const char *word);
void print_table();
void free_table();
void load_file(const char *filename);

int main(int argc, char *argv[])
{
    char *file = argv[1];
    load_file(file);

    printf("\nEl contenido de la hash table es:\n");
    print_table();

    printf("\n¿Esta Jorwin en la lista?\n");
    if (search("Jorwin"))
        printf("Si\n");
    else
        printf("No\n");

    free_table();

    return 0;
}

int hash(const char *word)
{
    return tolower(word[0]) - 'a';
}

void insert(const char *word)
{
    int index = hash(word);
    nodo *nn = malloc(sizeof(nodo));

    if (nn == NULL)
        exit(1);

    strcpy(nn->word, word);
    nn->next = hash_table[index];
    hash_table[index] = nn;
}

bool search(const char *word)
{
    int index = hash(word);
    nodo *nt = hash_table[index];

    while (nt != NULL)
    {
        if (strcmp(nt->word, word) == 0)
            return true;

        nt = nt->next;
    }

    return false;
}

void print_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        nodo *nt = hash_table[i];
        printf("[%c]: ", 'A' + i);

        while (nt != NULL)
        {
            printf("%s -> ", nt->word);
            nt = nt->next;
        }

        printf("NULL\n");
    }
}

void free_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        nodo *nt = hash_table[i];

        while (nt != NULL)
        {
            nodo *ne = nt;
            nt = nt->next;
            free(ne);
        }
    }
}

void load_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
        exit(1);

    char buf[WORD_SIZE];
    while (fgets(buf, sizeof(buf), file))
    {
        size_t l = strcspn(buf, "\n");
        buf[l] = '\0';

        if (buf[0] != '\0')
            insert(buf);
    }
}
