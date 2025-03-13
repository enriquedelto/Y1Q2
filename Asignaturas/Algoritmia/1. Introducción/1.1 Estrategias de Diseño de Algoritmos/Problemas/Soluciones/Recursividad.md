---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos/problemas/soluciones
---
# Factorial de un Número

## C

```C
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}
```

# Secuencia de Fibonacci

## C

```C
#include <stdio.h>

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Ingresa el valor de n para mostrar el n-ésimo número de la secuencia de Fibonacci: ");
    scanf("%d", &n);
    printf("El %d-ésimo número de la secuencia de Fibonacci es: %d\n", n, fibonacci(n));
    return 0;
}
```

# Suma de los Dígitos de un Número

## C

```C
#include <stdio.h>

int suma_digitos(int n) {
	if (n == 0) {
		printf("suma_digitos(0) = 0\n");
		return 0;
	}
	printf("(%d %% 10) + suma_digitos(%d / 10) = ", n, n);
	int resultado = (n % 10) + suma_digitos(n / 10);

    printf("%d\n", resultado);
    return resultado;
}

int main() {
    int numero;

    printf("Ingresa un número entero: ");
    scanf("%d", &numero);

    int suma = suma_digitos(numero);
    printf("La suma de los dígitos es: %d\n", suma);
    
    return 0;
}
```

# Invertir una Cadena

## C

```C
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
```

# Exponenciación (Potencia)

## C

```C
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
```

# Búsqueda Binaria Recursiva

## C

```C
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
```