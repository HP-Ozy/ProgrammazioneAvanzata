#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura per un nodo della lista
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Funzione per la creazione di un nuovo nodo
Node* createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        fprintf(stderr, "Errore: impossibile allocare memoria\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Funzione principale
int main() {
    // Creazione di alcuni nodi
    Node *node1 = createNode(3);
    Node *node2 = createNode(5);
    Node *node3 = createNode(7);

    // Collegamento dei nodi
    node1->next = node2;
    node2->next = node3;

    // Stampare i dati dei nodi
    printf("Dati dei nodi:\n");
    printf("Nodo 1: %d\n", node1->data);
    printf("Nodo 2: %d\n", node2->data);
    printf("Nodo 3: %d\n", node3->data);

    // Liberazione della memoria allocata per i nodi
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
