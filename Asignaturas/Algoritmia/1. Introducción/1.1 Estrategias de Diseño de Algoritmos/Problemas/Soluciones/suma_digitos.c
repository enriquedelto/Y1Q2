#include <stdio.h>

int suma_digitos(int n) {
	if (n == 0) {
		return 0;
	}

    int suma = (n % 10) + suma_digitos(n / 10);
    return suma;
}

int main() {
    int numero;

    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

    int suma = suma_digitos(numero);
    printf("La suma de los digitos es: %d\n", suma);
    
    return 0;

}