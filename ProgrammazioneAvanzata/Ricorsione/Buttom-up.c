#include <stdio.h>

int factorialBottomUp(int n, int *values) {
    if (n == 0 || n == 1) {
        printf("Caso base: factorialBottomUp(%d) restituisce 1\n", n);
        values[n] = 1;
        return 1;
    } else if (values[n] != 0) {
        printf("Valore già calcolato: factorialBottomUp(%d) restituisce %d\n", n, values[n]);
        return values[n];
    } else {
        printf("Calcolo di factorialBottomUp(%d) come %d * factorialBottomUp(%d)\n", n, n, n - 1);
        int result = n * factorialBottomUp(n - 1, values);
        printf("factorialBottomUp(%d) restituisce %d\n", n, result);
        values[n] = result;
        return result;
    }
}

int main() {
    int num = 5;
    int values[num + 1]; // Array per memorizzare i valori già calcolati
    for (int i = 0; i <= num; i++) {
        values[i] = 0; // Inizializzazione a zero
    }
    printf("Il fattoriale di %d è: %d\n", num, factorialBottomUp(num, values));
    return 0;
}
