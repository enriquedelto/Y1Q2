#include <stdio.h>

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    }
    return base * potencia(base, exponente - 1);
}

int main() {
    int base, exponente;

    printf("Ingrese la base y el exponente a calcular con formato (b e): ");
    scanf("%d %d", &base, &exponente);

    printf("La potencia de %d elevado a %d es %d", base, exponente, potencia(base, exponente));
}
