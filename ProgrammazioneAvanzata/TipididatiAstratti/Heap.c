/* 
Cos'è un HEAP ? 


*/



/*
Heap Proprety:
Esistono Max HEAP E Min HEAP.

Max Heap si legge in Maniera Decrescente e Il figlio del nodo
sarà sempre più piccolo del padre, Vice versa il Min Heap

*/


//Esempio Pratico: 



#include <stdio.h>
#include <stdlib.h>

int main() {
    int n ;
    int *heap_array;

    // Richiedi all'utente di inserire la dimensione del vettore
    printf("Inserisci la dimensione del vettore: ");
    scanf("%d", &n);

    // Allocazione di memoria per il vettore usando malloc
    heap_array = (int*)malloc(n * sizeof(int));



    // Deallocazione della memoria assegnata al vettore
    free(heap_array);

    return 0;
}
