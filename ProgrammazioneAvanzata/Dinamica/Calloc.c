#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    size_t n = 5; // Numero di elementi dell'array

    // Allocazione di memoria per un array di interi e inizializzazione a zero
    array = (int *)calloc(n, sizeof(int));

    // Verifica se l'allocazione di memoria ha avuto successo
    if (array == NULL) {
        printf("Errore: impossibile allocare memoria\n");
        return 1;
    }

    // Stampa dell'array inizializzato
    printf("Contenuto dell'array inizializzato a zero:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Liberazione della memoria allocata
    free(array);

    return 0;
}
