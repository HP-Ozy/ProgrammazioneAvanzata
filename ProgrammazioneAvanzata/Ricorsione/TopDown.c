#include <stdio.h>

int factorialTopDown(int n) {
    if (n == 0 || n == 1) {
        printf("Caso base: factorialTopDown(%d) restituisce 1\n", n);
        return 1;
    } else {
        printf("Calcolo di factorialTopDown(%d) come %d * factorialTopDown(%d)\n", n, n, n - 1);
        int result = n * factorialTopDown(n - 1);
        printf("factorialTopDown(%d) restituisce %d\n", n, result);
        return result;
    }
}

int main() {
    int num = 5;
    printf("Il fattoriale di %d è: %d\n", num, factorialTopDown(num));
    return 0;
}
