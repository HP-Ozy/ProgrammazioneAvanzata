#include <stdio.h>

// Funzione per scambiare due valori
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funzione per il partizionamento dell'array
int partition(int arr[], int low, int high) {
    // Scegliamo il pivot come l'ultimo elemento dell'array
    int pivot = arr[high];
    // Inizializziamo l'indice dell'elemento più piccolo
    int i = low - 1;

    // Scandiamo l'array
    for (int j = low; j <= high - 1; j++) {
        // Se l'elemento corrente è minore o uguale al pivot
        if (arr[j] <= pivot) {
            // Incrementiamo l'indice dell'elemento più piccolo
            i++;
            // Eseguiamo lo scambio tra l'elemento corrente e quello più piccolo
            swap(&arr[i], &arr[j]);
        }
    }
    // Alla fine del ciclo, scambiamo il pivot con l'elemento successivo all'indice dell'elemento più piccolo
    swap(&arr[i + 1], &arr[high]);
    // Restituiamo l'indice del pivot
    return (i + 1);
}

// Funzione principale per il quicksort
void quickSort(int arr[], int low, int high) {
    // Condizione di uscita per la ricorsione
    if (low < high) {
        // Troviamo l'indice del pivot utilizzando il partizionamento
        int pi = partition(arr, low, high);
        // Eseguiamo ricorsivamente il quicksort per il sotto-array sinistro e destro del pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Funzione principale
int main() {
    // Array di numeri da ordinare
    int arr[] = {5, 3, 1, 4, 2};
    // Lunghezza dell'array
    int n = 5;

    // Chiamiamo la funzione quicksort per ordinare l'array
    quickSort(arr, 0, n - 1);

    // Stampiamo l'array ordinato
    printf("Array ordinato: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
