#include <stdio.h>

void invertir_cadena(const char *cadena) {
    if (*cadena == '\0') {
        return;
    }
    invertir_cadena(cadena + 1);
    putchar(*cadena);
}

int main(void) {
    char cadena[] = "Hola, mundo!";
    printf("Cadena invertida: ");
    invertir_cadena(cadena);
    printf("\n");
    return 0;
}