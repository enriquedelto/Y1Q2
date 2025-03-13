#include <stdio.h>

int busquedaBinaria(int lista[], int inicio, int fin, int valor) {
    if (inicio > fin) {
        return -1;
    }
    
    int medio = (inicio + fin) / 2;

    if (lista[medio] == valor) {
        return medio;
    } else if (lista[medio] < valor) {
        return busquedaBinaria(lista, medio + 1, fin, valor);
    } else if (lista[medio] > valor) {
        return busquedaBinaria(lista, inicio, medio - 1, valor);
    }
}

int main() {
    int lista[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(lista) / sizeof(lista[0]);
    int valor;
    
    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor);
    
    int indice = busquedaBinaria(lista, 0, n - 1, valor);
    
    if (indice != -1) {
        printf("El valor %d se encuentra en la posición %d.\n", valor, indice);
    } else {
        printf("El valor %d no se encuentra en la lista.\n", valor);
    }
    
    return 0;
}