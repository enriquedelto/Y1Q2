#include <stdio.h>

int multiplo2(int n) {
    if (n == 1) {
        return 2;
    } else {
        return 2 * multiplo2(n - 1);
    }
}

int main() {
    int n;
    printf("Ingrese el valor de n para calcular el n-esimo múltiplo de 2: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("El valor de n debe ser mayor o igual a 1.\n");
    } else {
        printf("El %d-esimo múltiplo de 2 es: %d\n", n, multiplo2(n));
    }

    return 0;
}