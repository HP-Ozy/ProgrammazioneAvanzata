#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    int n = 5; // Numero di elementi dell'array

    // Allocazione di memoria per un array di interi
    array = (int *)malloc(n * sizeof(int));

    // Verifica se l'allocazione di memoria ha avuto successo
    if (array == NULL) {
        printf("Errore: impossibile allocare memoria\n");
        return 1;
    }

    // Inizializzazione dell'array
    for (int i = 0; i < n; i++) {
        array[i] = i * 10;
    }

    // Stampa dell'array
    printf("Contenuto dell'array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Liberazione della memoria allocata
    free(array);

    return 0;
}
