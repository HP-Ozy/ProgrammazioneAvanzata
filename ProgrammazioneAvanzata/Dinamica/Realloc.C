#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    size_t n = 5; // Dimensione iniziale dell'array

    // Allocazione di memoria per un array di interi
    array = (int *)malloc(n * sizeof(int));

    // Aggiunta di 5 elementi all'array
    for (size_t i = 0; i < n; i++) {
        array[i] = i * 10;
    }

    // Stampa dell'array originale
    printf("Contenuto dell'array originale:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Ridimensionamento dell'array a 10 elementi
    array = (int *)realloc(array, 10 * sizeof(int));

    // Aggiunta di altri 5 elementi all'array
    for (size_t i = n; i < 10; i++) {
        array[i] = i * 10;
    }

    // Stampa dell'array ridimensionato
    printf("Contenuto dell'array ridimensionato:\n");
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Liberazione della memoria allocata
    free(array);

    return 0;
}
