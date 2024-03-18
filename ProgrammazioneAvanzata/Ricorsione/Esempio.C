#include <stdio.h>

// Definizione della funzione ricorsiva per calcolare il fattoriale
unsigned long long int fattoriale(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fattoriale(n - 1);
    }
}

int main() {
    int numero;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &numero);

    // Calcola il fattoriale del numero fornito
    unsigned long long int risultato = fattoriale(numero);
    printf("Il fattoriale di %d è: %llu\n", numero, risultato);

    return 0;
}
